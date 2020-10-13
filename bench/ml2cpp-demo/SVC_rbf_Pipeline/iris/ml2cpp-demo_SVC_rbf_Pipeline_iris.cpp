// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVC_rbf_Pipeline
// Dataset : iris

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVC_rbf_Pipeline_iris.exe ml2cpp-demo_SVC_rbf_Pipeline_iris.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2 };

		return lClasses;
	}

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 5.8474999999999975 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 3.040833333333332 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 3.844166666666667 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 1.2458333333333336 ) : ( Feature_3)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 5.8474999999999975 ) / 0.827039146594646 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 3.040833333333332 ) / 0.43922200789830873 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 3.844166666666667 ) / 1.7109839193347847 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 1.2458333333333336 ) / 0.7486538845747673 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2 };
	
			return lClasses;
		}
	
		namespace pb_0_1 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 0, 1 };
		
				return lClasses;
			}
		
			std::vector<std::any> lProblem_data_dual_0_1 = { 
			0.0 ,0.0027242118456575815 ,1.0 ,0.3450097923242105 ,0.0 ,0.0033197805073579933 ,1.0 ,0.8525503917475604 ,0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.8981861566345479 ,-0.4941562036835392 ,-0.0 ,-0.0 ,-0.0 ,-0.1303218596521463 ,-0.5736680699246596 ,-0.0 ,-0.7254877236447019 ,-0.0 ,-0.0 ,-0.3817841628851917 ,-0.0 ,-0.0 ,-0.0 ,-0.0 , };
			
		
			std::vector<std::vector<std::any> > lProblem_data_sv_0_1 = { 
			 { -1.0247398850339788, 1.0454090605882773, -1.311623470744938, -0.8626594299983691 },
			 { -0.5410868419500932, 0.8177337660862934, -1.370069373637397, -1.12980557606238 },
			 { -0.903826624263008, 0.5900584715843097, -1.2531775678524786, -0.9962325030303746 },
			 { -1.7502194496598062, -0.3206427064236244, -1.4285152765298563, -1.396951722126391 },
			 { -1.7502194496598062, 0.3623831770823269, -1.4869611794223154, -1.396951722126391 },
			 { -1.2665664065759217, -0.09296741192164064, -1.4285152765298563, -1.2633786490943855 },
			 { -1.6293061888888354, -1.686694473435526, -1.4869611794223154, -1.2633786490943855 },
			 { -0.17834705963717942, 3.0944867111061303, -1.370069373637397, -1.12980557606238 },
			 { -0.5410868419500932, 0.8177337660862934, -1.2531775678524786, -1.396951722126391 },
			 { 0.1843927226757343, -0.3206427064236244, 0.3833077131363777, 0.33949822728968027 },
			 { 1.1516988088435047, -0.5483180009256082, 0.5586454218137551, 0.2059251542576747 },
			 { -0.29926032040815137, -0.09296741192164064, 0.3833077131363777, 0.33949822728968027 },
			 { 0.5471325049886481, 0.5900584715843097, 0.5001995189212961, 0.4730713003216859 },
			 { -0.903826624263008, -1.2313438844315585, -0.4933808302505097, -0.19479406483834152 },
			 { 1.3935253303854476, 0.3623831770823269, 0.5001995189212961, 0.2059251542576747 },
			 { -0.4201735811791223, -1.686694473435526, 0.09107819867408189, 0.07235208122566938 },
			 { -0.782913363492036, -0.775993295427591, 0.03263229578162268, 0.2059251542576747 },
			 { 0.5471325049886481, -1.686694473435526, 0.32486181024391875, 0.07235208122566938 },
			 { 0.42621924421767715, -1.914369767937509, 0.3833077131363777, 0.33949822728968027 },
			 { -1.1456531458049497, -1.4590191789335423, -0.3180431215731323, -0.3283671378703471 },
			 { 0.06347946190476342, 0.3623831770823269, 0.5586454218137551, 0.7402174463856968 },
			 { 0.1843927226757343, 0.8177337660862934, 0.3833077131363777, 0.4730713003216859 },
			 { 1.0307855480725336, 0.13470788258034314, 0.5001995189212961, 0.33949822728968027 },
			 { 0.5471325049886481, -1.2313438844315585, 0.6170913247062145, 0.33949822728968027 },
			 { -1.0247398850339788, -2.3697203569414764, -0.2011513157882139, -0.3283671378703471 },
			 { 0.3053059834467052, -0.3206427064236244, 0.5001995189212961, 0.2059251542576747 },
			 { -0.5410868419500932, -0.09296741192164064, 0.3833077131363777, 0.33949822728968027 },
			 { 1.0307855480725336, -0.09296741192164064, 0.6755372275986735, 0.6066443733536911 },
			 { 1.2726120696144765, 0.13470788258034314, 0.6170913247062145, 0.33949822728968027 },
			};
			
		
			double get_problem_0_1_decision_function( std::vector<std::any> const & inputs) {
				return rbf_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.24999999999999994 ) + 0.018145411214360276;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_0", "Score_1",
					"Proba_0", "Proba_1",
					"LogProba_0", "LogProba_1" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
		
				std::any lDotProduct_0_1 = rbf_kernel( lProblem_data_dual_0_1, lProblem_data_sv_0_1, inputs, 0.24999999999999994 ) + 0.018145411214360276;
		
				std::any lLogistic_0_1 = logistic(-3.4771869535090834 * lDotProduct_0_1 + -0.16122093556460385);
		
		
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
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace pb_0_1
		
	
		namespace pb_0_2 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 0, 2 };
		
				return lClasses;
			}
		
			std::vector<std::any> lProblem_data_dual_0_2 = { 
			0.09810537817920473 ,0.050572593650583364 ,0.2465640711868776 ,0.0 ,0.3316677880539961 ,0.0 ,1.0 ,0.9706512849490804 ,0.23122629097421588 ,-0.6569108235227655 ,-0.0 ,-0.0 ,-0.8105009897311531 ,-0.6150373827471793 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.48743411465510367 ,-0.0 ,-0.0 ,-0.0 ,-0.0 ,-0.3589040963377563 ,-0.0 , };
			
		
			std::vector<std::vector<std::any> > lProblem_data_sv_0_2 = { 
			 { -1.0247398850339788, 1.0454090605882773, -1.311623470744938, -0.8626594299983691 },
			 { -0.5410868419500932, 0.8177337660862934, -1.370069373637397, -1.12980557606238 },
			 { -0.903826624263008, 0.5900584715843097, -1.2531775678524786, -0.9962325030303746 },
			 { -1.7502194496598062, -0.3206427064236244, -1.4285152765298563, -1.396951722126391 },
			 { -1.7502194496598062, 0.3623831770823269, -1.4869611794223154, -1.396951722126391 },
			 { -1.2665664065759217, -0.09296741192164064, -1.4285152765298563, -1.2633786490943855 },
			 { -1.6293061888888354, -1.686694473435526, -1.4869611794223154, -1.2633786490943855 },
			 { -0.17834705963717942, 3.0944867111061303, -1.370069373637397, -1.12980557606238 },
			 { -0.5410868419500932, 0.8177337660862934, -1.2531775678524786, -1.396951722126391 },
			 { 2.4817446773241896, 1.7284349440942277, 1.4937798680931018, 1.0073635924497077 },
			 { 0.7889590265305909, -0.09296741192164064, 0.7924290333835919, 1.0073635924497077 },
			 { 0.3053059834467052, -0.09296741192164064, 0.6170913247062145, 0.7402174463856968 },
			 { -1.1456531458049497, -1.2313438844315585, 0.3833077131363777, 0.6066443733536911 },
			 { 2.239918155782247, -1.0036685899295748, 1.7860093825553978, 1.408082811545724 },
			 { 0.7889590265305909, 0.3623831770823269, 0.7339831304911324, 1.0073635924497077 },
			 { 0.5471325049886481, -0.775993295427591, 0.6170913247062145, 0.7402174463856968 },
			 { 1.6353518519273904, 0.3623831770823269, 1.2599962565232652, 0.7402174463856968 },
			 { 0.06347946190476342, -0.09296741192164064, 0.7339831304911324, 0.7402174463856968 },
			 { 0.1843927226757343, -0.09296741192164064, 0.5586454218137551, 0.7402174463856968 },
			 { 0.3053059834467052, -1.0036685899295748, 1.0262126449534283, 0.2059251542576747 },
			 { -0.29926032040815137, -0.5483180009256082, 0.6170913247062145, 1.0073635924497077 },
			 { 0.42621924421767715, 0.8177337660862934, 0.9093208391685104, 1.408082811545724 },
			 { 0.5471325049886481, -0.5483180009256082, 0.7339831304911324, 0.33949822728968027 },
			 { 0.7889590265305909, -0.09296741192164064, 0.9677667420609692, 0.7402174463856968 },
			 { -0.057433798866208544, -0.775993295427591, 0.7339831304911324, 0.8737905194177021 },
			 { 1.6353518519273904, -0.09296741192164064, 1.1431044507383468, 0.4730713003216859 },
			 { 0.1843927226757343, -1.914369767937509, 0.6755372275986735, 0.33949822728968027 },
			 { 0.5471325049886481, -1.2313438844315585, 0.6755372275986735, 0.8737905194177021 },
			};
			
		
			double get_problem_0_2_decision_function( std::vector<std::any> const & inputs) {
				return rbf_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.24999999999999994 ) + -0.13454533497486673;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_0", "Score_2",
					"Proba_0", "Proba_2",
					"LogProba_0", "LogProba_2" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
		
				std::any lDotProduct_0_2 = rbf_kernel( lProblem_data_dual_0_2, lProblem_data_sv_0_2, inputs, 0.24999999999999994 ) + -0.13454533497486673;
		
				std::any lLogistic_0_2 = logistic(-3.582110189134971 * lDotProduct_0_2 + -0.013783966363514888);
		
		
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
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace pb_0_2
		
	
		namespace pb_1_2 {
		
			std::vector<std::any> get_classes(){
				std::vector<std::any> lClasses = { 1, 2 };
		
				return lClasses;
			}
		
			std::vector<std::any> lProblem_data_dual_1_2 = { 
			1.0 ,1.0 ,1.0 ,1.0 ,0.0 ,1.0 ,0.6096297506364055 ,0.6347925422629616 ,1.0 ,1.0 ,0.0 ,1.0 ,0.0 ,1.0 ,1.0 ,0.4377667165534046 ,1.0 ,1.0 ,1.0 ,1.0 ,-0.7890282033670144 ,-0.24030268715816983 ,-1.0 ,-1.0 ,-0.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-1.0 ,-0.2739194295399174 ,-1.0 ,-1.0 ,-0.37893868938766995 ,-1.0 ,-1.0 ,-1.0 , };
			
		
			std::vector<std::vector<std::any> > lProblem_data_sv_1_2 = { 
			 { 0.1843927226757343, -0.3206427064236244, 0.3833077131363777, 0.33949822728968027 },
			 { 1.1516988088435047, -0.5483180009256082, 0.5586454218137551, 0.2059251542576747 },
			 { -0.29926032040815137, -0.09296741192164064, 0.3833077131363777, 0.33949822728968027 },
			 { 0.5471325049886481, 0.5900584715843097, 0.5001995189212961, 0.4730713003216859 },
			 { -0.903826624263008, -1.2313438844315585, -0.4933808302505097, -0.19479406483834152 },
			 { 1.3935253303854476, 0.3623831770823269, 0.5001995189212961, 0.2059251542576747 },
			 { -0.4201735811791223, -1.686694473435526, 0.09107819867408189, 0.07235208122566938 },
			 { -0.782913363492036, -0.775993295427591, 0.03263229578162268, 0.2059251542576747 },
			 { 0.5471325049886481, -1.686694473435526, 0.32486181024391875, 0.07235208122566938 },
			 { 0.42621924421767715, -1.914369767937509, 0.3833077131363777, 0.33949822728968027 },
			 { -1.1456531458049497, -1.4590191789335423, -0.3180431215731323, -0.3283671378703471 },
			 { 0.06347946190476342, 0.3623831770823269, 0.5586454218137551, 0.7402174463856968 },
			 { 0.1843927226757343, 0.8177337660862934, 0.3833077131363777, 0.4730713003216859 },
			 { 1.0307855480725336, 0.13470788258034314, 0.5001995189212961, 0.33949822728968027 },
			 { 0.5471325049886481, -1.2313438844315585, 0.6170913247062145, 0.33949822728968027 },
			 { -1.0247398850339788, -2.3697203569414764, -0.2011513157882139, -0.3283671378703471 },
			 { 0.3053059834467052, -0.3206427064236244, 0.5001995189212961, 0.2059251542576747 },
			 { -0.5410868419500932, -0.09296741192164064, 0.3833077131363777, 0.33949822728968027 },
			 { 1.0307855480725336, -0.09296741192164064, 0.6755372275986735, 0.6066443733536911 },
			 { 1.2726120696144765, 0.13470788258034314, 0.6170913247062145, 0.33949822728968027 },
			 { 2.4817446773241896, 1.7284349440942277, 1.4937798680931018, 1.0073635924497077 },
			 { 0.7889590265305909, -0.09296741192164064, 0.7924290333835919, 1.0073635924497077 },
			 { 0.3053059834467052, -0.09296741192164064, 0.6170913247062145, 0.7402174463856968 },
			 { -1.1456531458049497, -1.2313438844315585, 0.3833077131363777, 0.6066443733536911 },
			 { 2.239918155782247, -1.0036685899295748, 1.7860093825553978, 1.408082811545724 },
			 { 0.7889590265305909, 0.3623831770823269, 0.7339831304911324, 1.0073635924497077 },
			 { 0.5471325049886481, -0.775993295427591, 0.6170913247062145, 0.7402174463856968 },
			 { 1.6353518519273904, 0.3623831770823269, 1.2599962565232652, 0.7402174463856968 },
			 { 0.06347946190476342, -0.09296741192164064, 0.7339831304911324, 0.7402174463856968 },
			 { 0.1843927226757343, -0.09296741192164064, 0.5586454218137551, 0.7402174463856968 },
			 { 0.3053059834467052, -1.0036685899295748, 1.0262126449534283, 0.2059251542576747 },
			 { -0.29926032040815137, -0.5483180009256082, 0.6170913247062145, 1.0073635924497077 },
			 { 0.42621924421767715, 0.8177337660862934, 0.9093208391685104, 1.408082811545724 },
			 { 0.5471325049886481, -0.5483180009256082, 0.7339831304911324, 0.33949822728968027 },
			 { 0.7889590265305909, -0.09296741192164064, 0.9677667420609692, 0.7402174463856968 },
			 { -0.057433798866208544, -0.775993295427591, 0.7339831304911324, 0.8737905194177021 },
			 { 1.6353518519273904, -0.09296741192164064, 1.1431044507383468, 0.4730713003216859 },
			 { 0.1843927226757343, -1.914369767937509, 0.6755372275986735, 0.33949822728968027 },
			 { 0.5471325049886481, -1.2313438844315585, 0.6755372275986735, 0.8737905194177021 },
			};
			
		
			double get_problem_1_2_decision_function( std::vector<std::any> const & inputs) {
				return rbf_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.24999999999999994 ) + 0.05315457353357668;
			}
			
		
			std::vector<std::string> get_input_names(){
				std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
		
				return lFeatures;
			}
		
			std::vector<std::string> get_output_names(){
				std::vector<std::string> lOutputs = { 
					"Score_1", "Score_2",
					"Proba_1", "Proba_2",
					"LogProba_1", "LogProba_2" };
		
				return lOutputs;
			}
		
			tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
				auto lClasses = get_classes();
		
				std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
		
				std::any lDotProduct_1_2 = rbf_kernel( lProblem_data_dual_1_2, lProblem_data_sv_1_2, inputs, 0.24999999999999994 ) + 0.05315457353357668;
		
				std::any lLogistic_1_2 = logistic(-3.582221184611412 * lDotProduct_1_2 + 0.20991433317563216);
		
		
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
				tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
		
				return lTable;
			}
		
		} // eof namespace pb_1_2
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1", "Score_2",
				"Proba_0", "Proba_1", "Proba_2",
				"LogProba_0", "LogProba_1", "LogProba_2",
				"Decision", "DecisionProba" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5) {
			auto lClasses = get_classes();
	
			std::vector<std::any> inputs = { scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5 };
	
			std::map<uint, tTable> lBinaryScores = { 
				{ 0 , pb_0_1::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5) },
				{ 1 , pb_0_2::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5) },
				{ 2 , pb_1_2::compute_classification_scores(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5) }
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
			tTable lTable = compute_classification_scores(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1", "Score_2",
			"Proba_0", "Proba_1", "Proba_2",
			"LogProba_0", "LogProba_1", "LogProba_2",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable = lTable_model;

		int lBestClass = get_arg_max( lTable["Proba"] );
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
	score_csv_file("outputs/ml2cpp-demo/datasets/iris.csv");
	return 0;
}
