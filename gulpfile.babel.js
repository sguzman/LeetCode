'use strict';

import gulp from 'gulp';
import babel from 'gulp-babel'
import mocha from 'gulp-mocha'
import flow from 'gulp-flowtype'
import sourcemaps from 'gulp-sourcemaps'
import del from 'del'

gulp.task('default', () => {
    return gulp.src('./src/js/**/*.js')
        .pipe(sourcemaps.init())
        .pipe(babel())
        .pipe(gulp.dest('dist/'))
        .pipe(mocha({reporter: 'spec'}))
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
});

gulp.task('clean', function(){
    return del('dist/**', {force:true});
});