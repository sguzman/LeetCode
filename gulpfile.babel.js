'use strict';

import gulp from 'gulp';
import babel from 'gulp-babel'
import util from 'gulp-util'
import mocha from 'gulp-mocha'
import flow from 'gulp-flowtype'
import sourcemaps from 'gulp-sourcemaps'
import del from 'del'

gulp.task('default', () => {
    return gulp.src('./src/js/**/*.js')
        .pipe(flow())
        .on('error', util.log)
        .pipe(sourcemaps.init())
        .pipe(babel())
        .on('error', util.log)
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

gulp.task('clean', function(){
    return del('dist/**', {force:true});
});