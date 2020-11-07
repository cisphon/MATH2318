#include "Tools.h"

namespace MATH2318::HW11 {
	//https://www.chegg.com/homework-help/questions-and-answers/use-function-find-image-v-preimage-w-t-v1-v2-v1-v2-v1-v2-v-9-8-w-5-19-image-v-b-preimage-w-q23413158
	void question1() {
		VectorXf v(2);
		v << 7, -6;

		VectorXf w(2);
		w << 5, 19;

		VectorXf image(2);
		image << (v(0) + v(1)), (v(0) - v(1));

		cout << image << endl;

	}

	// uhh 
	void question2() {

	}

	//https://www.chegg.com/homework-help/questions-and-answers/let-t-linear-transformation-r2-r2-t-1-0-1-1-t-0-1-1-1--find-t-3-1-t-7-1-73-1-24-707-1-02-q24362503
	void question3() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/define-linear-transformation-t-rn-rm-t-v-av-find-dimensions-rn-rm-0-5-1-4-1-2-1-1-1-3-0-0--q9397703
	void question4() {
		// R^n = # of columns
		// R^m = # of rows
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-standard-matrix-linear-transformation-t-t-x-y-3x-4y-3x-8y-find-standard-matrix-linear-q20588917
	void question5() {

	}

	// 
	void question6() {

	}

	// https://www.slader.com/discussion/question/use-the-standard-matrix-for-the-linear-transformation-t-to-find-the-image-of-the-vector-v-tx-yx-3-y-2-xy-y-mathbfv-24-f6f813c5/
	void question7() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-standard-matrices-t-t2-t1-t-t1-t2-t1-r2-r2-t1-x-y-x-4y-2x-5y-t2-r2-r2-t2-x-y-0-x-q21157285
	void question8() {

	}


}