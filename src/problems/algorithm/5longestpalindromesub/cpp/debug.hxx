#pragma once

namespace debug {
  inline static void print(ul C, ul R, vector<ul>& p, ul pi, string pre, ul i) {
    cout << "Center: " << C << ", Right: " << R << ", P[i]: " << pi << ", pre: " << pre.substr(0ul, i) + '[' +  pre[i] + ']' + pre.substr(i + 1) << ", P: " << p << endl;
  }
}
