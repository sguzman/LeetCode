'use strict';

import gulp from 'gulp';
import babel from 'gulp-babel'
import util from 'gulp-util'
import mocha from 'gulp-mocha'
import flow from 'gulp-flowtype'
import sourcemaps from 'gulp-sourcemaps'

gulp.task('default', () => {
    return gulp.src('./src/js/**/*.js')
        .pipe(flow())
        .on('error', util.log)
        .pipe(sourcemaps.init())
        .pipe(babel({"plugins": ["syntax-flow", "transform-es2015-modules-commonjs"]}))
        .pipe(gulp.dest('dist/'))
        .pipe(mocha({reporter: 'spec'}))
        .on('error', util.log);
});

gulp.task('flow', function() {
    return gulp.src('./src/js/**/*.js')
        .pipe(flow());
});

gulp.task('babel', function () {
    return gulp.src('./src/js/**/*.js')
        .pipe(babel());
});

gulp.task('test', ['babel'], () => {
    return gulp.src('./src/js/**/*.js')
        .pipe(mocha({reporter: 'spec'}))
        .on('error', util.log);
});