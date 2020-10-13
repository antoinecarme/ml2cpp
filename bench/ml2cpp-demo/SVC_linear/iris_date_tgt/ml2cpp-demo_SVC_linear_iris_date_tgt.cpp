// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_linear
// Dataset : iris_date_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_linear_iris_date_tgt.exe ml2cpp-demo_SVC_linear_iris_date_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };

		return lClasses;
	}

	namespace pb_0_1 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-08-14T00:00:00.000000000 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_1 = { 
		0.0 ,0.6709810386669243 ,0.07695068916357257 ,-0.0 ,-0.0 ,-0.0 ,-0.7479317278304967 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_1 = { 
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 6.0, 2.9, 4.5, 1.5 },
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 6.3, 3.3, 4.7, 1.6 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 6.1, 2.9, 4.7, 1.4 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		 { 6.9, 3.1, 4.9, 1.5 },
		};
		
	
		double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
			return linear_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs ) + 1.4519466669807166;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000",
				"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000",
				"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_1 = linear_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs ) + 1.4519466669807166;
	
			std::any lLogistic_0_1 = logistic(-2.1320601374448307 * lDotProduct_0_1 + -0.5667058467622482);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_0_1,
				lDotProduct_0_1 
			} ;
			lTable["Proba"] = { 
				lLogistic_0_1,
				1.0 - lLogistic_0_1 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_0_1
	

	namespace pb_0_2 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 1789-07-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_0_2 = { 
		0.15943550003321236 ,0.044248343249857366 ,0.0 ,-0.0 ,-0.0 ,-0.2036838432830697 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_0_2 = { 
		 { 4.8, 3.4, 1.9, 0.2 },
		 { 5.1, 3.3, 1.7, 0.5 },
		 { 4.5, 2.3, 1.3, 0.3 },
		 { 6.5, 3.0, 5.2, 2.0 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 4.9, 2.5, 4.5, 1.7 },
		 { 6.9, 3.1, 5.1, 2.3 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 5.9, 3.0, 5.1, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 7.2, 3.0, 5.8, 1.6 },
		 { 6.0, 2.2, 5.0, 1.5 },
		 { 6.3, 2.5, 5.0, 1.9 },
		};
		
	
		double get_problem_0_2_decision_function( std::vector<std::any> const & inputs) {
			return linear_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs ) + 1.5072878538334147;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_1789-07-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
				"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
				"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_0_2 = linear_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs ) + 1.5072878538334147;
	
			std::any lLogistic_0_2 = logistic(-2.7812727860175634 * lDotProduct_0_2 + -0.2573773913268626);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_0_2,
				lDotProduct_0_2 
			} ;
			lTable["Proba"] = { 
				lLogistic_0_2,
				1.0 - lLogistic_0_2 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_0_2
	

	namespace pb_1_2 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 1789-08-14T00:00:00.000000000, 1789-09-14T00:00:00.000000000 };
	
			return lClasses;
		}
	
		std::vector<std::any> lProblem_data_dual_1_2 = { 
		0.04377811227841179 ,1.0 ,1.0 ,0.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,1.0 ,-0.11086669319106603 ,-1.0 ,-1.0 ,-0.39443743790143015 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.14906106870063957 ,-1.0 ,-0.3894129124852761 , };
		
	
		std::vector<std::vector<std::any> > lProblem_data_sv_1_2 = { 
		 { 6.0, 2.9, 4.5, 1.5 },
		 { 5.6, 3.0, 4.5, 1.5 },
		 { 6.3, 3.3, 4.7, 1.6 },
		 { 5.1, 2.5, 3.0, 1.1 },
		 { 6.2, 2.2, 4.5, 1.5 },
		 { 5.9, 3.2, 4.8, 1.8 },
		 { 6.3, 2.5, 4.9, 1.5 },
		 { 6.1, 2.9, 4.7, 1.4 },
		 { 5.4, 3.0, 4.5, 1.5 },
		 { 6.7, 3.0, 5.0, 1.7 },
		 { 6.9, 3.1, 4.9, 1.5 },
		 { 6.5, 3.0, 5.2, 2.0 },
		 { 6.1, 3.0, 4.9, 1.8 },
		 { 4.9, 2.5, 4.5, 1.7 },
		 { 6.9, 3.1, 5.1, 2.3 },
		 { 6.5, 3.2, 5.1, 2.0 },
		 { 6.3, 2.7, 4.9, 1.8 },
		 { 5.9, 3.0, 5.1, 1.8 },
		 { 6.0, 3.0, 4.8, 1.8 },
		 { 6.3, 2.8, 5.1, 1.5 },
		 { 7.2, 3.0, 5.8, 1.6 },
		 { 6.0, 2.2, 5.0, 1.5 },
		 { 6.3, 2.5, 5.0, 1.9 },
		};
		
	
		double get_problem_1_2_decision_function( std::vector<std::any> const & inputs) {
			return linear_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs ) + 6.454311462025748;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
				"Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
				"LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };
	
			std::any lDotProduct_1_2 = linear_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs ) + 6.454311462025748;
	
			std::any lLogistic_1_2 = logistic(-2.2539639689751185 * lDotProduct_1_2 + 0.012734320043709514);
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				-lDotProduct_1_2,
				lDotProduct_1_2 
			} ;
			lTable["Proba"] = { 
				lLogistic_1_2,
				1.0 - lLogistic_1_2 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace pb_1_2
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_1789-07-14T00:00:00.000000000", "Score_1789-08-14T00:00:00.000000000", "Score_1789-09-14T00:00:00.000000000",
			"Proba_1789-07-14T00:00:00.000000000", "Proba_1789-08-14T00:00:00.000000000", "Proba_1789-09-14T00:00:00.000000000",
			"LogProba_1789-07-14T00:00:00.000000000", "LogProba_1789-08-14T00:00:00.000000000", "LogProba_1789-09-14T00:00:00.000000000",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3 };

		std::map<uint, tTable> lBinaryScores = { 
			{ 0 , pb_0_1::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) },
			{ 1 , pb_0_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) },
			{ 2 , pb_1_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3) }
		};

		tTable lOVRTable = compute_svc_ovr_scores(lBinaryScores, lClasses);


		tTable lTable = lOVRTable;

		int lBestClass = get_arg_max( lTable["Score"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/iris_date_tgt.csv");
	return 0;
}
