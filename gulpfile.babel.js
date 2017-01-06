'use strict';

import gulp from 'gulp';
import babel from 'gulp-babel'
import util from 'gulp-util'
import mocha from 'gulp-mocha'

gulp.task('default', () => {
    return gulp.src('./src/js/leet.js')
        .pipe(babel())
        .pipe(mocha({reporter: 'spec'}))
        .on('error', util.log);
});