// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_rbf
// Dataset : boston

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_rbf_boston.exe ml2cpp-demo_SVR_rbf_boston.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> lProblem_data_dual = { 
	 -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , -0.1 , 0.1 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , 0.1 , -0.1 , -0.1 , 0.1 , 0.1 , -0.1 , -0.1 ,};
	

	std::vector<std::vector<std::any> > lProblem_data_sv = { 
	 { 12.8023, 0.0, 18.1, 0.0, 0.74, 5.854, 96.6, 1.8956, 24.0, 666.0, 20.2, 240.52, 23.79 },
	 { 0.1415, 0.0, 6.91, 0.0, 0.448, 6.169, 6.6, 5.7209, 3.0, 233.0, 17.9, 383.37, 5.81 },
	 { 7.99248, 0.0, 18.1, 0.0, 0.7, 5.52, 100.0, 1.5331, 24.0, 666.0, 20.2, 396.9, 24.56 },
	 { 0.19657, 22.0, 5.86, 0.0, 0.431, 6.226, 79.2, 8.0555, 7.0, 330.0, 19.1, 376.14, 10.15 },
	 { 0.1265, 25.0, 5.13, 0.0, 0.453, 6.762, 43.4, 7.9809, 8.0, 284.0, 19.7, 395.58, 9.5 },
	 { 11.1604, 0.0, 18.1, 0.0, 0.74, 6.629, 94.6, 2.1247, 24.0, 666.0, 20.2, 109.85, 23.27 },
	 { 0.03537, 34.0, 6.09, 0.0, 0.433, 6.59, 40.4, 5.4917, 7.0, 329.0, 16.1, 395.75, 9.5 },
	 { 0.05059, 0.0, 4.49, 0.0, 0.449, 6.389, 48.0, 4.7794, 3.0, 247.0, 18.5, 396.9, 9.62 },
	 { 10.8342, 0.0, 18.1, 0.0, 0.679, 6.782, 90.8, 1.8195, 24.0, 666.0, 20.2, 21.57, 25.79 },
	 { 0.12744, 0.0, 6.91, 0.0, 0.448, 6.77, 2.9, 5.7209, 3.0, 233.0, 17.9, 385.41, 4.84 },
	 { 0.40771, 0.0, 6.2, 1.0, 0.507, 6.164, 91.3, 3.048, 8.0, 307.0, 17.4, 395.24, 21.46 },
	 { 12.2472, 0.0, 18.1, 0.0, 0.584, 5.837, 59.7, 1.9976, 24.0, 666.0, 20.2, 24.65, 15.69 },
	 { 15.288, 0.0, 18.1, 0.0, 0.671, 6.649, 93.3, 1.3449, 24.0, 666.0, 20.2, 363.02, 23.24 },
	 { 0.0315, 95.0, 1.47, 0.0, 0.403, 6.975, 15.3, 7.6534, 3.0, 402.0, 17.0, 396.9, 4.56 },
	 { 0.17171, 25.0, 5.13, 0.0, 0.453, 5.966, 93.4, 6.8185, 8.0, 284.0, 19.7, 378.08, 14.44 },
	 { 0.12579, 45.0, 3.44, 0.0, 0.437, 6.556, 29.1, 4.5667, 5.0, 398.0, 15.2, 382.84, 4.56 },
	 { 7.75223, 0.0, 18.1, 0.0, 0.713, 6.301, 83.7, 2.7831, 24.0, 666.0, 20.2, 272.21, 16.23 },
	 { 0.34006, 0.0, 21.89, 0.0, 0.624, 6.458, 98.9, 2.1185, 4.0, 437.0, 21.2, 395.04, 12.6 },
	 { 0.02009, 95.0, 2.68, 0.0, 0.4161, 8.034, 31.9, 5.118, 4.0, 224.0, 14.7, 390.55, 2.88 },
	 { 0.7842, 0.0, 8.14, 0.0, 0.538, 5.99, 81.7, 4.2579, 4.0, 307.0, 21.0, 386.75, 14.67 },
	 { 0.33045, 0.0, 6.2, 0.0, 0.507, 6.086, 61.5, 3.6519, 8.0, 307.0, 17.4, 376.75, 10.88 },
	 { 0.13117, 0.0, 8.56, 0.0, 0.52, 6.127, 85.2, 2.1224, 5.0, 384.0, 20.9, 387.69, 14.09 },
	 { 0.16211, 20.0, 6.96, 0.0, 0.464, 6.24, 16.3, 4.429, 3.0, 223.0, 18.6, 396.9, 6.59 },
	 { 1.25179, 0.0, 8.14, 0.0, 0.538, 5.57, 98.1, 3.7979, 4.0, 307.0, 21.0, 376.57, 21.02 },
	 { 0.16439, 22.0, 5.86, 0.0, 0.431, 6.433, 49.1, 7.8265, 7.0, 330.0, 19.1, 374.71, 9.52 },
	 { 0.1146, 20.0, 6.96, 0.0, 0.464, 6.538, 58.7, 3.9175, 3.0, 223.0, 18.6, 394.96, 7.73 },
	 { 8.20058, 0.0, 18.1, 0.0, 0.713, 5.936, 80.3, 2.7792, 24.0, 666.0, 20.2, 3.5, 16.94 },
	 { 5.73116, 0.0, 18.1, 0.0, 0.532, 7.061, 77.0, 3.4106, 24.0, 666.0, 20.2, 395.28, 7.01 },
	 { 2.77974, 0.0, 19.58, 0.0, 0.871, 4.903, 97.8, 1.3459, 5.0, 403.0, 14.7, 396.9, 29.29 },
	 { 4.03841, 0.0, 18.1, 0.0, 0.532, 6.229, 90.7, 3.0993, 24.0, 666.0, 20.2, 395.33, 12.87 },
	 { 2.44668, 0.0, 19.58, 0.0, 0.871, 5.272, 94.0, 1.7364, 5.0, 403.0, 14.7, 88.63, 16.14 },
	 { 1.51902, 0.0, 19.58, 1.0, 0.605, 8.375, 93.9, 2.162, 5.0, 403.0, 14.7, 388.45, 3.32 },
	 { 9.72418, 0.0, 18.1, 0.0, 0.74, 6.406, 97.2, 2.0651, 24.0, 666.0, 20.2, 385.96, 19.52 },
	 { 0.17783, 0.0, 9.69, 0.0, 0.585, 5.569, 73.5, 2.3999, 6.0, 391.0, 19.2, 395.77, 15.1 },
	 { 0.04666, 80.0, 1.52, 0.0, 0.404, 7.107, 36.6, 7.309, 2.0, 329.0, 12.6, 354.31, 8.61 },
	 { 0.10084, 0.0, 10.01, 0.0, 0.547, 6.715, 81.6, 2.6775, 6.0, 432.0, 17.8, 395.59, 10.16 },
	 { 0.19539, 0.0, 10.81, 0.0, 0.413, 6.245, 6.2, 5.2873, 4.0, 305.0, 19.2, 377.17, 7.54 },
	 { 0.12083, 0.0, 2.89, 0.0, 0.445, 8.069, 76.0, 3.4952, 2.0, 276.0, 18.0, 396.9, 4.21 },
	 { 0.19073, 22.0, 5.86, 0.0, 0.431, 6.718, 17.5, 7.8265, 7.0, 330.0, 19.1, 393.74, 6.56 },
	 { 0.33983, 22.0, 5.86, 0.0, 0.431, 6.108, 34.9, 8.0555, 7.0, 330.0, 19.1, 390.18, 9.16 },
	 { 6.71772, 0.0, 18.1, 0.0, 0.713, 6.749, 92.6, 2.3236, 24.0, 666.0, 20.2, 0.32, 17.44 },
	 { 9.59571, 0.0, 18.1, 0.0, 0.693, 6.404, 100.0, 1.639, 24.0, 666.0, 20.2, 376.11, 20.31 },
	 { 0.04932, 33.0, 2.18, 0.0, 0.472, 6.849, 70.3, 3.1827, 7.0, 222.0, 18.4, 396.9, 7.53 },
	 { 0.49298, 0.0, 9.9, 0.0, 0.544, 6.635, 82.5, 3.3175, 4.0, 304.0, 18.4, 396.9, 4.54 },
	 { 15.1772, 0.0, 18.1, 0.0, 0.74, 6.152, 100.0, 1.9142, 24.0, 666.0, 20.2, 9.32, 26.45 },
	 { 0.62976, 0.0, 8.14, 0.0, 0.538, 5.949, 61.8, 4.7075, 4.0, 307.0, 21.0, 396.9, 8.26 },
	};
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12) {
		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12 };

		std::any lDotProduct = rbf_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 3.593503301725366e-06 ) + 20.345228865742683;


		tTable lTable;

		std::any  lEstimator = lDotProduct;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/boston.csv");
	return 0;
}