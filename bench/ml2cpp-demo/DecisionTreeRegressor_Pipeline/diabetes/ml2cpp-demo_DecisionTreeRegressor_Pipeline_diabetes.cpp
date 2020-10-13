// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DecisionTreeRegressor_Pipeline
// Dataset : diabetes

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DecisionTreeRegressor_Pipeline_diabetes.exe ml2cpp-demo_DecisionTreeRegressor_Pipeline_diabetes.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
	
			tTable lTable;
	
			lTable["imputer_output_2"] = { ((Feature_0 == std::any()) ?  ( 0.0002686932066652995 ) : ( Feature_0)) };
			lTable["imputer_output_3"] = { ((Feature_1 == std::any()) ?  ( 0.0007239580580639441 ) : ( Feature_1)) };
			lTable["imputer_output_4"] = { ((Feature_2 == std::any()) ?  ( 0.0007280719825586765 ) : ( Feature_2)) };
			lTable["imputer_output_5"] = { ((Feature_3 == std::any()) ?  ( 0.001013565221084393 ) : ( Feature_3)) };
			lTable["imputer_output_6"] = { ((Feature_4 == std::any()) ?  ( 0.0009763580732882109 ) : ( Feature_4)) };
			lTable["imputer_output_7"] = { ((Feature_5 == std::any()) ?  ( 0.0017643808242337245 ) : ( Feature_5)) };
			lTable["imputer_output_8"] = { ((Feature_6 == std::any()) ?  ( -0.0016512815450565026 ) : ( Feature_6)) };
			lTable["imputer_output_9"] = { ((Feature_7 == std::any()) ?  ( 0.0013905501983388136 ) : ( Feature_7)) };
			lTable["imputer_output_10"] = { ((Feature_8 == std::any()) ?  ( 0.0012726482548090939 ) : ( Feature_8)) };
			lTable["imputer_output_11"] = { ((Feature_9 == std::any()) ?  ( 0.001034425005681627 ) : ( Feature_9)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "imputer_output_2", "imputer_output_3", "imputer_output_4", "imputer_output_5", "imputer_output_6", "imputer_output_7", "imputer_output_8", "imputer_output_9", "imputer_output_10", "imputer_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any imputer_output_2, std::any imputer_output_3, std::any imputer_output_4, std::any imputer_output_5, std::any imputer_output_6, std::any imputer_output_7, std::any imputer_output_8, std::any imputer_output_9, std::any imputer_output_10, std::any imputer_output_11) {
	
			tTable lTable;
	
			lTable["scaler_output_2"] = { ( ( imputer_output_2 - 0.0002686932066652995 ) / 0.04724209583653783 ) };
			lTable["scaler_output_3"] = { ( ( imputer_output_3 - 0.0007239580580639441 ) / 0.047605576685038974 ) };
			lTable["scaler_output_4"] = { ( ( imputer_output_4 - 0.0007280719825586765 ) / 0.04693591143936869 ) };
			lTable["scaler_output_5"] = { ( ( imputer_output_5 - 0.001013565221084393 ) / 0.0483352719489719 ) };
			lTable["scaler_output_6"] = { ( ( imputer_output_6 - 0.0009763580732882109 ) / 0.048050762009702486 ) };
			lTable["scaler_output_7"] = { ( ( imputer_output_7 - 0.0017643808242337245 ) / 0.04806080873154401 ) };
			lTable["scaler_output_8"] = { ( ( imputer_output_8 - -0.0016512815450565026 ) / 0.04620240378043046 ) };
			lTable["scaler_output_9"] = { ( ( imputer_output_9 - 0.0013905501983388136 ) / 0.047363093040531656 ) };
			lTable["scaler_output_10"] = { ( ( imputer_output_10 - 0.0012726482548090939 ) / 0.04589286131364784 ) };
			lTable["scaler_output_11"] = { ( ( imputer_output_11 - 0.001034425005681627 ) / 0.04776158519570627 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("imputer_output_2")[0], iTable.at("imputer_output_3")[0], iTable.at("imputer_output_4")[0], iTable.at("imputer_output_5")[0], iTable.at("imputer_output_6")[0], iTable.at("imputer_output_7")[0], iTable.at("imputer_output_8")[0], iTable.at("imputer_output_9")[0], iTable.at("imputer_output_10")[0], iTable.at("imputer_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 9 ,  {104. }} ,
				{ 12 ,  {128. }} ,
				{ 13 ,  {142. }} ,
				{ 15 ,  {150. }} ,
				{ 17 ,  {158. }} ,
				{ 18 ,  {160. }} ,
				{ 21 ,  {101. }} ,
				{ 24 ,  {70. }} ,
				{ 25 ,  {71. }} ,
				{ 27 ,  {55. }} ,
				{ 28 ,  {61. }} ,
				{ 30 ,  {138. }} ,
				{ 31 ,  {101. }} ,
				{ 37 ,  {88. }} ,
				{ 38 ,  {96. }} ,
				{ 41 ,  {63. }} ,
				{ 42 ,  {65. }} ,
				{ 43 ,  {78. }} ,
				{ 45 ,  {74. }} ,
				{ 47 ,  {53. }} ,
				{ 48 ,  {47. }} ,
				{ 49 ,  {135. }} ,
				{ 52 ,  {64. }} ,
				{ 54 ,  {53. }} ,
				{ 56 ,  {54. }} ,
				{ 57 ,  {55. }} ,
				{ 59 ,  {25. }} ,
				{ 60 ,  {31. }} ,
				{ 65 ,  {77. }} ,
				{ 66 ,  {68. }} ,
				{ 68 ,  {200. }} ,
				{ 70 ,  {146. }} ,
				{ 72 ,  {178. }} ,
				{ 73 ,  {168. }} ,
				{ 77 ,  {83. }} ,
				{ 79 ,  {129. }} ,
				{ 80 ,  {160. }} ,
				{ 83 ,  {53. }} ,
				{ 84 ,  {71. }} ,
				{ 86 ,  {132. }} ,
				{ 89 ,  {77. }} ,
				{ 90 ,  {83. }} ,
				{ 93 ,  {97. }} ,
				{ 94 ,  {89. }} ,
				{ 96 ,  {104. }} ,
				{ 97 ,  {107. }} ,
				{ 100 ,  {60. }} ,
				{ 101 ,  {67. }} ,
				{ 102 ,  {44. }} ,
				{ 105 ,  {200. }} ,
				{ 107 ,  {55. }} ,
				{ 112 ,  {113. }} ,
				{ 114 ,  {116. }} ,
				{ 115 ,  {118. }} ,
				{ 116 ,  {127. }} ,
				{ 118 ,  {79. }} ,
				{ 119 ,  {88. }} ,
				{ 121 ,  {144. }} ,
				{ 122 ,  {135. }} ,
				{ 126 ,  {200. }} ,
				{ 128 ,  {219. }} ,
				{ 129 ,  {216. }} ,
				{ 130 ,  {177. }} ,
				{ 131 ,  {104. }} ,
				{ 135 ,  {137. }} ,
				{ 139 ,  {85. }} ,
				{ 140 ,  {96. }} ,
				{ 141 ,  {72. }} ,
				{ 143 ,  {90. }} ,
				{ 145 ,  {37. }} ,
				{ 147 ,  {45. }} ,
				{ 150 ,  {48. }} ,
				{ 151 ,  {49. }} ,
				{ 152 ,  {51. }} ,
				{ 155 ,  {152. }} ,
				{ 159 ,  {125. }} ,
				{ 160 ,  {104. }} ,
				{ 163 ,  {91. }} ,
				{ 165 ,  {72. }} ,
				{ 167 ,  {77. }} ,
				{ 168 ,  {80. }} ,
				{ 170 ,  {71. }} ,
				{ 172 ,  {64. }} ,
				{ 173 ,  {66. }} ,
				{ 177 ,  {39. }} ,
				{ 178 ,  {40. }} ,
				{ 179 ,  {42. }} ,
				{ 180 ,  {65. }} ,
				{ 184 ,  {143. }} ,
				{ 185 ,  {114. }} ,
				{ 190 ,  {65. }} ,
				{ 191 ,  {75. }} ,
				{ 192 ,  {52. }} ,
				{ 193 ,  {90. }} ,
				{ 198 ,  {99. }} ,
				{ 199 ,  {98. }} ,
				{ 200 ,  {92. }} ,
				{ 202 ,  {96. }} ,
				{ 204 ,  {128. }} ,
				{ 205 ,  {118. }} ,
				{ 208 ,  {60. }} ,
				{ 209 ,  {72. }} ,
				{ 212 ,  {94. }} ,
				{ 213 ,  {97. }} ,
				{ 215 ,  {84. }} ,
				{ 216 ,  {87. }} ,
				{ 219 ,  {179. }} ,
				{ 220 ,  {158. }} ,
				{ 222 ,  {87. }} ,
				{ 224 ,  {108. }} ,
				{ 226 ,  {102. }} ,
				{ 227 ,  {103. }} ,
				{ 231 ,  {68. }} ,
				{ 232 ,  {61. }} ,
				{ 234 ,  {39. }} ,
				{ 236 ,  {53. }} ,
				{ 238 ,  {49. }} ,
				{ 239 ,  {51. }} ,
				{ 241 ,  {113. }} ,
				{ 243 ,  {81. }} ,
				{ 246 ,  {60. }} ,
				{ 247 ,  {59. }} ,
				{ 248 ,  {63. }} ,
				{ 253 ,  {190. }} ,
				{ 254 ,  {168. }} ,
				{ 256 ,  {150. }} ,
				{ 257 ,  {140. }} ,
				{ 261 ,  {92. }} ,
				{ 263 ,  {124. }} ,
				{ 264 ,  {111. }} ,
				{ 266 ,  {153. }} ,
				{ 268 ,  {131. }} ,
				{ 269 ,  {141. }} ,
				{ 271 ,  {88. }} ,
				{ 272 ,  {73. }} ,
				{ 273 ,  {230. }} ,
				{ 274 ,  {253. }} ,
				{ 276 ,  {302. }} ,
				{ 281 ,  {201. }} ,
				{ 283 ,  {182. }} ,
				{ 284 ,  {187. }} ,
				{ 285 ,  {210. }} ,
				{ 290 ,  {145. }} ,
				{ 291 ,  {121. }} ,
				{ 293 ,  {172. }} ,
				{ 295 ,  {191. }} ,
				{ 297 ,  {184. }} ,
				{ 298 ,  {182. }} ,
				{ 299 ,  {96. }} ,
				{ 303 ,  {78. }} ,
				{ 304 ,  {70. }} ,
				{ 306 ,  {95. }} ,
				{ 307 ,  {90. }} ,
				{ 311 ,  {167. }} ,
				{ 314 ,  {147. }} ,
				{ 315 ,  {144. }} ,
				{ 317 ,  {140. }} ,
				{ 318 ,  {141. }} ,
				{ 319 ,  {110. }} ,
				{ 321 ,  {91. }} ,
				{ 322 ,  {103. }} ,
				{ 325 ,  {52. }} ,
				{ 327 ,  {127. }} ,
				{ 329 ,  {118. }} ,
				{ 330 ,  {113. }} ,
				{ 334 ,  {170. }} ,
				{ 335 ,  {175. }} ,
				{ 338 ,  {293. }} ,
				{ 339 ,  {288. }} ,
				{ 342 ,  {263. }} ,
				{ 343 ,  {257. }} ,
				{ 345 ,  {237. }} ,
				{ 346 ,  {244. }} ,
				{ 348 ,  {131. }} ,
				{ 349 ,  {155. }} ,
				{ 355 ,  {252. }} ,
				{ 357 ,  {185. }} ,
				{ 358 ,  {178. }} ,
				{ 363 ,  {162. }} ,
				{ 365 ,  {94. }} ,
				{ 366 ,  {86. }} ,
				{ 368 ,  {200. }} ,
				{ 369 ,  {214. }} ,
				{ 375 ,  {93. }} ,
				{ 376 ,  {88. }} ,
				{ 378 ,  {84. }} ,
				{ 379 ,  {78. }} ,
				{ 380 ,  {102. }} ,
				{ 382 ,  {58. }} ,
				{ 384 ,  {74. }} ,
				{ 385 ,  {69. }} ,
				{ 389 ,  {170. }} ,
				{ 390 ,  {154. }} ,
				{ 391 ,  {209. }} ,
				{ 394 ,  {90. }} ,
				{ 395 ,  {91. }} ,
				{ 396 ,  {66. }} ,
				{ 399 ,  {168. }} ,
				{ 400 ,  {172. }} ,
				{ 401 ,  {206. }} ,
				{ 406 ,  {258. }} ,
				{ 407 ,  {221. }} ,
				{ 410 ,  {276. }} ,
				{ 415 ,  {126. }} ,
				{ 416 ,  {202. }} ,
				{ 419 ,  {144. }} ,
				{ 420 ,  {161. }} ,
				{ 423 ,  {94. }} ,
				{ 424 ,  {90. }} ,
				{ 427 ,  {101. }} ,
				{ 429 ,  {107. }} ,
				{ 430 ,  {111. }} ,
				{ 431 ,  {123. }} ,
				{ 432 ,  {185. }} ,
				{ 435 ,  {151. }} ,
				{ 439 ,  {206. }} ,
				{ 441 ,  {200. }} ,
				{ 442 ,  {196. }} ,
				{ 443 ,  {179. }} ,
				{ 444 ,  {229. }} ,
				{ 446 ,  {142. }} ,
				{ 447 ,  {100. }} ,
				{ 449 ,  {192. }} ,
				{ 453 ,  {68. }} ,
				{ 454 ,  {52. }} ,
				{ 455 ,  {85. }} ,
				{ 458 ,  {137. }} ,
				{ 459 ,  {122. }} ,
				{ 461 ,  {99. }} ,
				{ 462 ,  {84. }} ,
				{ 464 ,  {262. }} ,
				{ 465 ,  {317. }} ,
				{ 468 ,  {151. }} ,
				{ 472 ,  {292. }} ,
				{ 473 ,  {281. }} ,
				{ 475 ,  {259. }} ,
				{ 477 ,  {245. }} ,
				{ 478 ,  {235. }} ,
				{ 481 ,  {202. }} ,
				{ 482 ,  {173. }} ,
				{ 486 ,  {242. }} ,
				{ 488 ,  {233. }} ,
				{ 489 ,  {232. }} ,
				{ 490 ,  {220. }} ,
				{ 491 ,  {198. }} ,
				{ 495 ,  {122. }} ,
				{ 496 ,  {164. }} ,
				{ 498 ,  {95. }} ,
				{ 499 ,  {67. }} ,
				{ 506 ,  {156. }} ,
				{ 507 ,  {134. }} ,
				{ 508 ,  {109. }} ,
				{ 512 ,  {198. }} ,
				{ 514 ,  {219. }} ,
				{ 516 ,  {214. }} ,
				{ 517 ,  {212. }} ,
				{ 521 ,  {174. }} ,
				{ 522 ,  {173. }} ,
				{ 523 ,  {180. }} ,
				{ 524 ,  {164. }} ,
				{ 525 ,  {131. }} ,
				{ 527 ,  {131. }} ,
				{ 528 ,  {115. }} ,
				{ 530 ,  {249. }} ,
				{ 532 ,  {202. }} ,
				{ 533 ,  {196. }} ,
				{ 536 ,  {311. }} ,
				{ 537 ,  {277. }} ,
				{ 539 ,  {150. }} ,
				{ 540 ,  {225. }} ,
				{ 545 ,  {252. }} ,
				{ 546 ,  {257. }} ,
				{ 548 ,  {48. }} ,
				{ 551 ,  {143. }} ,
				{ 554 ,  {185. }} ,
				{ 556 ,  {190. }} ,
				{ 557 ,  {191. }} ,
				{ 558 ,  {217. }} ,
				{ 562 ,  {120. }} ,
				{ 563 ,  {129. }} ,
				{ 565 ,  {144. }} ,
				{ 566 ,  {138. }} ,
				{ 568 ,  {171. }} ,
				{ 569 ,  {163. }} ,
				{ 574 ,  {195. }} ,
				{ 575 ,  {202. }} ,
				{ 576 ,  {178. }} ,
				{ 579 ,  {232. }} ,
				{ 580 ,  {222. }} ,
				{ 581 ,  {265. }} ,
				{ 583 ,  {270. }} ,
				{ 584 ,  {280. }} ,
				{ 590 ,  {197. }} ,
				{ 591 ,  {208. }} ,
				{ 592 ,  {235. }} ,
				{ 594 ,  {166. }} ,
				{ 595 ,  {150. }} ,
				{ 597 ,  {241. }} ,
				{ 599 ,  {246. }} ,
				{ 600 ,  {248. }} ,
				{ 604 ,  {273. }} ,
				{ 605 ,  {258. }} ,
				{ 607 ,  {297. }} ,
				{ 609 ,  {281. }} ,
				{ 610 ,  {283. }} ,
				{ 613 ,  {230. }} ,
				{ 614 ,  {236. }} ,
				{ 615 ,  {248. }} ,
				{ 619 ,  {151. }} ,
				{ 620 ,  {259. }} ,
				{ 625 ,  {321. }} ,
				{ 630 ,  {281. }} ,
				{ 633 ,  {272. }} ,
				{ 634 ,  {270. }} ,
				{ 636 ,  {277. }} ,
				{ 638 ,  {275. }} ,
				{ 639 ,  {274. }} ,
				{ 640 ,  {258. }} ,
				{ 641 ,  {303. }} ,
				{ 643 ,  {243. }} ,
				{ 645 ,  {263. }} ,
				{ 646 ,  {261. }} ,
				{ 648 ,  {275. }} ,
				{ 650 ,  {310. }} ,
				{ 651 ,  {332. }} ,
				{ 653 ,  {242. }} ,
				{ 654 ,  {220. }} ,
				{ 657 ,  {336. }} ,
				{ 658 ,  {346. }} ,
				{ 659 ,  {308. }} ,
				{ 664 ,  {128. }} ,
				{ 665 ,  {121. }} ,
				{ 668 ,  {178. }} ,
				{ 669 ,  {180. }} ,
				{ 670 ,  {233. }} ,
				{ 673 ,  {215. }} ,
				{ 674 ,  {186. }} ,
				{ 677 ,  {242. }} ,
				{ 678 ,  {233. }} ,
				{ 679 ,  {252. }} ,
				{ 683 ,  {279. }} ,
				{ 685 ,  {268. }} ,
				{ 686 ,  {264. }} ,
				{ 687 ,  {306. }} ,
				{ 689 ,  {217. }} ,
				{ 690 ,  {220. }} 
		};
		
	
		int get_decision_tree_node_index(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
			int lNodeIndex = (scaler_output_10 <= -0.012311428901739419) ? ( (scaler_output_4 <= 0.11634615436196327) ? ( (scaler_output_7 <= 2.307655453681946) ? ( (scaler_output_10 <= -0.23324186354875565) ? ( (scaler_output_8 <= 0.49086402356624603) ? ( (scaler_output_11 <= -0.6946570873260498) ? ( (scaler_output_2 <= -0.6222151517868042) ? ( (scaler_output_5 <= -1.028649628162384) ? ( (scaler_output_8 <= -0.5848832726478577) ? ( 9 ) : ( (scaler_output_8 <= 0.012754112482070923) ? ( (scaler_output_10 <= -0.5601608902215958) ? ( 12 ) : ( 13 ) ) : ( (scaler_output_7 <= -0.7742574512958527) ? ( 15 ) : ( (scaler_output_10 <= -0.8340450525283813) ? ( 17 ) : ( 18 ) ) ) ) ) : ( (scaler_output_8 <= -0.22630083560943604) ? ( (scaler_output_4 <= -1.7092508673667908) ? ( 21 ) : ( (scaler_output_9 <= -0.47364669293165207) ? ( (scaler_output_4 <= -0.9055288732051849) ? ( 24 ) : ( 25 ) ) : ( (scaler_output_6 <= -1.0695281624794006) ? ( 27 ) : ( 28 ) ) ) ) : ( (scaler_output_5 <= -0.24513117223978043) ? ( 30 ) : ( 31 ) ) ) ) : ( (scaler_output_4 <= -0.7792297303676605) ? ( (scaler_output_6 <= 0.03293476696126163) ? ( (scaler_output_11 <= -1.0415557026863098) ? ( (scaler_output_8 <= 0.09243909735232592) ? ( (scaler_output_6 <= -1.01225735549815) ? ( 37 ) : ( 38 ) ) : ( (scaler_output_5 <= -0.6725048795342445) ? ( (scaler_output_2 <= -0.08397127687931061) ? ( 41 ) : ( 42 ) ) : ( 43 ) ) ) : ( (scaler_output_8 <= -0.266143336892128) ? ( 45 ) : ( (scaler_output_3 <= 0.04821458458900452) ? ( 47 ) : ( 48 ) ) ) ) : ( 49 ) ) : ( (scaler_output_4 <= -0.3773687556385994) ? ( (scaler_output_5 <= -0.6012759208679199) ? ( 52 ) : ( (scaler_output_4 <= -0.7447845041751862) ? ( 54 ) : ( (scaler_output_11 <= -1.171642690896988) ? ( 56 ) : ( 57 ) ) ) ) : ( (scaler_output_2 <= -0.16086325235664845) ? ( 59 ) : ( 60 ) ) ) ) ) : ( (scaler_output_8 <= 0.09243909455835819) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( (scaler_output_5 <= -0.5300469771027565) ? ( (scaler_output_11 <= 0.042502447962760925) ? ( 65 ) : ( 66 ) ) : ( (scaler_output_11 <= -0.26103383116424084) ? ( 68 ) : ( (scaler_output_8 <= -0.5848832726478577) ? ( 70 ) : ( (scaler_output_10 <= -1.051557183265686) ? ( 72 ) : ( 73 ) ) ) ) ) : ( (scaler_output_4 <= -0.26255133748054504) ? ( (scaler_output_7 <= -0.516888439655304) ? ( (scaler_output_11 <= -0.4778454601764679) ? ( 77 ) : ( (scaler_output_10 <= -0.5033947080373764) ? ( 79 ) : ( 80 ) ) ) : ( (scaler_output_4 <= -0.6184853613376617) ? ( (scaler_output_5 <= 0.2178570032119751) ? ( 83 ) : ( 84 ) ) : ( (scaler_output_10 <= -0.9429911971092224) ? ( 86 ) : ( (scaler_output_6 <= -0.4538670554757118) ? ( (scaler_output_4 <= -0.3544052690267563) ? ( 89 ) : ( 90 ) ) : ( (scaler_output_6 <= 0.4051949866116047) ? ( (scaler_output_9 <= 0.8040958233177662) ? ( 93 ) : ( 94 ) ) : ( (scaler_output_5 <= -0.8149627670645714) ? ( 96 ) : ( 97 ) ) ) ) ) ) ) : ( (scaler_output_5 <= 0.36031490564346313) ? ( (scaler_output_4 <= -0.05587998405098915) ? ( 100 ) : ( 101 ) ) : ( 102 ) ) ) ) : ( (scaler_output_5 <= 0.03978463192470372) ? ( (scaler_output_10 <= -1.6207599639892578) ? ( 105 ) : ( (scaler_output_6 <= -1.2842937111854553) ? ( 107 ) : ( (scaler_output_8 <= 0.3314940482378006) ? ( (scaler_output_10 <= -0.5443405508995056) ? ( (scaler_output_10 <= -0.7719537019729614) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( 112 ) : ( (scaler_output_9 <= -0.47364669293165207) ? ( 114 ) : ( 115 ) ) ) : ( 116 ) ) : ( (scaler_output_3 <= 0.04821458458900452) ? ( 118 ) : ( 119 ) ) ) : ( (scaler_output_2 <= -0.9297830909490585) ? ( 121 ) : ( 122 ) ) ) ) ) : ( (scaler_output_9 <= -0.14252439886331558) ? ( (scaler_output_4 <= -0.2510695904493332) ? ( (scaler_output_5 <= 0.5383872725069523) ? ( 126 ) : ( (scaler_output_8 <= 0.29165155440568924) ? ( 128 ) : ( 129 ) ) ) : ( 130 ) ) : ( 131 ) ) ) ) ) : ( (scaler_output_4 <= -0.36588703095912933) ? ( (scaler_output_4 <= -1.3303533792495728) ? ( (scaler_output_2 <= -2.121608793735504) ? ( 135 ) : ( (scaler_output_5 <= -1.1354930400848389) ? ( (scaler_output_11 <= -0.26103383116424084) ? ( (scaler_output_8 <= 1.2478713989257812) ? ( 139 ) : ( 140 ) ) : ( 141 ) ) : ( (scaler_output_4 <= -1.7896230816841125) ? ( 143 ) : ( (scaler_output_6 <= -1.2127052247524261) ? ( 145 ) : ( (scaler_output_10 <= -1.6591604351997375) ? ( 147 ) : ( (scaler_output_6 <= 0.0042993659153580666) ? ( (scaler_output_2 <= -0.007079290226101875) ? ( 150 ) : ( 151 ) ) : ( 152 ) ) ) ) ) ) ) : ( (scaler_output_8 <= 0.8892889320850372) ? ( (scaler_output_5 <= -1.562866747379303) ? ( 155 ) : ( (scaler_output_11 <= 0.38940106332302094) ? ( (scaler_output_6 <= -0.9263511598110199) ? ( (scaler_output_4 <= -0.7333027720451355) ? ( 159 ) : ( 160 ) ) : ( (scaler_output_10 <= -0.6321826577186584) ? ( (scaler_output_11 <= -1.2150049805641174) ? ( 163 ) : ( (scaler_output_5 <= -0.6368903815746307) ? ( 165 ) : ( (scaler_output_2 <= -0.3530932664871216) ? ( 167 ) : ( 168 ) ) ) ) : ( (scaler_output_8 <= 0.690076470375061) ? ( 170 ) : ( (scaler_output_4 <= -0.8021932244300842) ? ( 172 ) : ( 173 ) ) ) ) ) : ( (scaler_output_5 <= 0.7520741373300552) ? ( (scaler_output_11 <= 0.9964736104011536) ? ( (scaler_output_4 <= -1.0203463435173035) ? ( 177 ) : ( 178 ) ) : ( 179 ) ) : ( 180 ) ) ) ) : ( (scaler_output_5 <= -0.24513117223978043) ? ( (scaler_output_6 <= -1.3558822274208069) ? ( (scaler_output_11 <= -1.9521645307540894) ? ( 184 ) : ( 185 ) ) : ( (scaler_output_11 <= -1.648628294467926) ? ( (scaler_output_10 <= -1.2208372354507446) ? ( (scaler_output_6 <= 0.23338259011507034) ? ( (scaler_output_7 <= -0.5494668036699295) ? ( 190 ) : ( 191 ) ) : ( 192 ) ) : ( 193 ) ) : ( (scaler_output_10 <= -0.7113083302974701) ? ( (scaler_output_9 <= -1.252757966518402) ? ( (scaler_output_8 <= 2.1642487049102783) ? ( (scaler_output_2 <= -0.8144451379776001) ? ( 198 ) : ( 199 ) ) : ( 200 ) ) : ( (scaler_output_8 <= 1.606453776359558) ? ( 202 ) : ( (scaler_output_4 <= -0.8136749863624573) ? ( 204 ) : ( 205 ) ) ) ) : ( (scaler_output_4 <= -0.8021932244300842) ? ( (scaler_output_5 <= -0.9930351376533508) ? ( 208 ) : ( 209 ) ) : ( (scaler_output_8 <= 1.4072413444519043) ? ( (scaler_output_10 <= -0.42928415536880493) ? ( 212 ) : ( 213 ) ) : ( (scaler_output_8 <= 2.522831082344055) ? ( 215 ) : ( 216 ) ) ) ) ) ) ) : ( (scaler_output_8 <= 1.3275563716888428) ? ( (scaler_output_9 <= -0.6723200678825378) ? ( 219 ) : ( 220 ) ) : ( (scaler_output_11 <= 0.08586477674543858) ? ( 222 ) : ( (scaler_output_5 <= 1.226933777332306) ? ( 224 ) : ( (scaler_output_5 <= 1.713664948940277) ? ( 226 ) : ( 227 ) ) ) ) ) ) ) ) : ( (scaler_output_6 <= 0.17611177265644073) ? ( (scaler_output_2 <= -1.045121043920517) ? ( (scaler_output_2 <= -1.6602569222450256) ? ( 231 ) : ( 232 ) ) : ( (scaler_output_10 <= -1.3967618346214294) ? ( 234 ) : ( (scaler_output_4 <= -0.17069740546867251) ? ( 236 ) : ( (scaler_output_10 <= -0.9712473750114441) ? ( 238 ) : ( 239 ) ) ) ) ) : ( (scaler_output_6 <= 0.29065337777137756) ? ( 241 ) : ( (scaler_output_10 <= -1.0032868385314941) ? ( 243 ) : ( (scaler_output_11 <= -0.13094685040414333) ? ( (scaler_output_10 <= -0.7339947521686554) ? ( 246 ) : ( 247 ) ) : ( 248 ) ) ) ) ) ) ) : ( (scaler_output_6 <= 1.665152668952942) ? ( (scaler_output_2 <= -0.08397127129137516) ? ( (scaler_output_10 <= -0.12130370736122131) ? ( (scaler_output_8 <= 0.49086400121450424) ? ( 253 ) : ( 254 ) ) : ( (scaler_output_8 <= -0.6645682752132416) ? ( 256 ) : ( 257 ) ) ) : ( (scaler_output_8 <= 1.0885013937950134) ? ( (scaler_output_10 <= -0.11978243291378021) ? ( (scaler_output_10 <= -0.1500326246023178) ? ( 261 ) : ( (scaler_output_8 <= -0.7044107243418694) ? ( 263 ) : ( 264 ) ) ) : ( (scaler_output_4 <= -0.9399741441011429) ? ( 266 ) : ( (scaler_output_9 <= -0.47364669293165207) ? ( 268 ) : ( 269 ) ) ) ) : ( (scaler_output_4 <= -0.021434752270579338) ? ( 271 ) : ( 272 ) ) ) ) : ( 273 ) ) ) : ( 274 ) ) : ( (scaler_output_2 <= -1.7755948901176453) ? ( 276 ) : ( (scaler_output_5 <= 0.46715833246707916) ? ( (scaler_output_6 <= -1.0122573673725128) ? ( (scaler_output_10 <= -0.39942847192287445) ? ( (scaler_output_10 <= -1.6439977288246155) ? ( 281 ) : ( (scaler_output_8 <= 0.05259661376476288) ? ( 283 ) : ( 284 ) ) ) : ( 285 ) ) : ( (scaler_output_4 <= 0.7593237161636353) ? ( (scaler_output_7 <= 0.9556534290313721) ? ( (scaler_output_6 <= -0.6972679793834686) ? ( (scaler_output_5 <= -0.28074564039707184) ? ( 290 ) : ( 291 ) ) : ( (scaler_output_5 <= -1.0286496579647064) ? ( 293 ) : ( (scaler_output_4 <= 0.40338970720767975) ? ( 295 ) : ( (scaler_output_5 <= -0.173902228474617) ? ( 297 ) : ( 298 ) ) ) ) ) : ( 299 ) ) : ( (scaler_output_7 <= -0.24974589422345161) ? ( (scaler_output_8 <= 0.291651563718915) ? ( (scaler_output_8 <= -0.06693087331950665) ? ( 303 ) : ( 304 ) ) : ( (scaler_output_10 <= -0.9769963622093201) ? ( 306 ) : ( 307 ) ) ) : ( (scaler_output_6 <= 0.1904294788837433) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( (scaler_output_7 <= -0.08685409091413021) ? ( 311 ) : ( (scaler_output_4 <= 1.2760021090507507) ? ( (scaler_output_2 <= 0.031366705894470215) ? ( 314 ) : ( 315 ) ) : ( (scaler_output_5 <= -0.553789985133335) ? ( 317 ) : ( 318 ) ) ) ) : ( 319 ) ) : ( (scaler_output_8 <= 0.2518090605735779) ? ( 321 ) : ( 322 ) ) ) ) ) ) : ( (scaler_output_4 <= 0.5641340911388397) ? ( (scaler_output_11 <= -0.21767151355743408) ? ( 325 ) : ( (scaler_output_4 <= 0.23116357624530792) ? ( 327 ) : ( (scaler_output_8 <= -0.027088403701782227) ? ( 329 ) : ( 330 ) ) ) ) : ( (scaler_output_11 <= 0.996473640203476) ? ( (scaler_output_7 <= -0.6960694193840027) ? ( (scaler_output_9 <= -0.9528001546859741) ? ( 334 ) : ( 335 ) ) : ( (scaler_output_6 <= -0.597044050693512) ? ( (scaler_output_7 <= -0.4777944087982178) ? ( 338 ) : ( 339 ) ) : ( (scaler_output_10 <= -0.5554354190826416) ? ( (scaler_output_9 <= -0.021762147545814514) ? ( 342 ) : ( 343 ) ) : ( (scaler_output_5 <= 0.7164596617221832) ? ( 345 ) : ( 346 ) ) ) ) ) : ( (scaler_output_7 <= 0.41485263407230377) ? ( 348 ) : ( 349 ) ) ) ) ) ) ) : ( (scaler_output_4 <= 1.1726664304733276) ? ( (scaler_output_5 <= 0.752074122428894) ? ( (scaler_output_4 <= -0.5151496827602386) ? ( (scaler_output_6 <= -1.2413405776023865) ? ( (scaler_output_4 <= -1.0777550339698792) ? ( 355 ) : ( (scaler_output_11 <= -0.434483140707016) ? ( 357 ) : ( 358 ) ) ) : ( (scaler_output_11 <= 0.8663866519927979) ? ( (scaler_output_4 <= -0.9973828196525574) ? ( (scaler_output_2 <= -1.1604590117931366) ? ( (scaler_output_5 <= -1.4560233354568481) ? ( 363 ) : ( (scaler_output_4 <= -1.6059151887893677) ? ( 365 ) : ( 366 ) ) ) : ( (scaler_output_7 <= -0.3344496190547943) ? ( 368 ) : ( 369 ) ) ) : ( (scaler_output_5 <= 0.11101358011364937) ? ( (scaler_output_5 <= -0.38758906722068787) ? ( (scaler_output_2 <= 0.9540704786777496) ? ( (scaler_output_6 <= 0.17611175775527954) ? ( (scaler_output_2 <= -0.08397126197814941) ? ( 375 ) : ( 376 ) ) : ( (scaler_output_10 <= 0.5746701285243034) ? ( 378 ) : ( 379 ) ) ) : ( 380 ) ) : ( (scaler_output_8 <= -0.5848832428455353) ? ( 382 ) : ( (scaler_output_7 <= 0.8383713327348232) ? ( 384 ) : ( 385 ) ) ) ) : ( (scaler_output_5 <= 0.5027728229761124) ? ( (scaler_output_10 <= 1.1101525723934174) ? ( (scaler_output_5 <= 0.3247004300355911) ? ( 389 ) : ( 390 ) ) : ( 391 ) ) : ( (scaler_output_4 <= -0.6988575458526611) ? ( (scaler_output_7 <= 0.5647131055593491) ? ( 394 ) : ( 395 ) ) : ( 396 ) ) ) ) ) : ( (scaler_output_10 <= 0.5667824447154999) ? ( (scaler_output_10 <= 0.3965364992618561) ? ( 399 ) : ( 400 ) ) : ( 401 ) ) ) ) : ( (scaler_output_2 <= 0.14670467749238014) ? ( (scaler_output_11 <= 1.9938071370124817) ? ( (scaler_output_11 <= -0.9981933832168579) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( 406 ) : ( 407 ) ) : ( (scaler_output_4 <= 0.5870975852012634) ? ( (scaler_output_9 <= -0.47364669293165207) ? ( 410 ) : ( (scaler_output_7 <= 0.287797037512064) ? ( (scaler_output_8 <= -0.14661585073918104) ? ( (scaler_output_11 <= -0.5645701140165329) ? ( (scaler_output_5 <= -0.9218061864376068) ? ( 415 ) : ( 416 ) ) : ( (scaler_output_7 <= -0.5787873268127441) ? ( (scaler_output_2 <= -0.5068771801888943) ? ( 419 ) : ( 420 ) ) : ( (scaler_output_9 <= 0.30546460300683975) ? ( (scaler_output_2 <= -0.08397127315402031) ? ( 423 ) : ( 424 ) ) : ( (scaler_output_6 <= 0.09020556509494781) ? ( (scaler_output_6 <= -0.3965962529182434) ? ( 427 ) : ( (scaler_output_4 <= 0.15079137682914734) ? ( 429 ) : ( 430 ) ) ) : ( 431 ) ) ) ) ) : ( 432 ) ) : ( (scaler_output_11 <= 1.4300969243049622) ? ( (scaler_output_4 <= -0.30847831070423126) ? ( 435 ) : ( (scaler_output_9 <= 1.4741314947605133) ? ( (scaler_output_11 <= 0.6062126997858286) ? ( (scaler_output_7 <= 0.6233541369438171) ? ( 439 ) : ( (scaler_output_10 <= 0.15163551270961761) ? ( 441 ) : ( 442 ) ) ) : ( 443 ) ) : ( 444 ) ) ) : ( (scaler_output_2 <= -0.04552527889609337) ? ( 446 ) : ( 447 ) ) ) ) ) : ( (scaler_output_5 <= -1.1236215829849243) ? ( 449 ) : ( (scaler_output_5 <= -0.4944324940443039) ? ( (scaler_output_11 <= -0.17430918477475643) ? ( (scaler_output_11 <= -0.5645701140165329) ? ( 453 ) : ( 454 ) ) : ( 455 ) ) : ( (scaler_output_5 <= -0.09080177545547485) ? ( (scaler_output_6 <= 1.2499393224716187) ? ( 458 ) : ( 459 ) ) : ( (scaler_output_7 <= 1.5420637726783752) ? ( 461 ) : ( 462 ) ) ) ) ) ) ) : ( (scaler_output_4 <= 0.42635322362184525) ? ( 464 ) : ( 465 ) ) ) : ( (scaler_output_2 <= 0.4927186071872711) ? ( (scaler_output_7 <= -1.6017478108406067) ? ( 468 ) : ( (scaler_output_10 <= 0.574166402220726) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( (scaler_output_8 <= -0.5450407788157463) ? ( 472 ) : ( 473 ) ) : ( (scaler_output_4 <= 0.01301047345623374) ? ( 475 ) : ( (scaler_output_9 <= 1.0845759212970734) ? ( 477 ) : ( 478 ) ) ) ) : ( (scaler_output_2 <= 0.22359665483236313) ? ( (scaler_output_7 <= 0.28453920781612396) ? ( 481 ) : ( 482 ) ) : ( (scaler_output_5 <= 0.6333592236042023) ? ( (scaler_output_10 <= 1.4414416551589966) ? ( (scaler_output_5 <= -0.5300469696521759) ? ( 486 ) : ( (scaler_output_2 <= 0.33893463015556335) ? ( 488 ) : ( 489 ) ) ) : ( 490 ) ) : ( 491 ) ) ) ) ) : ( (scaler_output_2 <= 0.6080565750598907) ? ( (scaler_output_7 <= 1.056646317243576) ? ( (scaler_output_11 <= 0.5628503561019897) ? ( 495 ) : ( 496 ) ) : ( (scaler_output_9 <= 0.30546460300683975) ? ( 498 ) : ( 499 ) ) ) : ( (scaler_output_11 <= 0.6062126755714417) ? ( (scaler_output_10 <= 1.2880752086639404) ? ( (scaler_output_11 <= 0.5194880366325378) ? ( (scaler_output_11 <= -0.5645701289176941) ? ( (scaler_output_4 <= -0.10180694609880447) ? ( (scaler_output_6 <= -0.05297142267227173) ? ( 506 ) : ( 507 ) ) : ( 508 ) ) : ( (scaler_output_9 <= 1.6922827363014221) ? ( (scaler_output_4 <= 0.34598100185394287) ? ( (scaler_output_5 <= -0.506303995847702) ? ( 512 ) : ( (scaler_output_5 <= 0.03978462517261505) ? ( 514 ) : ( (scaler_output_4 <= -0.044398233294487) ? ( 516 ) : ( 517 ) ) ) ) : ( (scaler_output_7 <= 1.2684056758880615) ? ( (scaler_output_6 <= 0.662913590669632) ? ( (scaler_output_11 <= 0.17258942872285843) ? ( 521 ) : ( 522 ) ) : ( 523 ) ) : ( 524 ) ) ) : ( 525 ) ) ) : ( (scaler_output_6 <= 0.6915489882230759) ? ( 527 ) : ( 528 ) ) ) : ( (scaler_output_10 <= 1.612431526184082) ? ( 530 ) : ( (scaler_output_6 <= 2.3667200803756714) ? ( 532 ) : ( 533 ) ) ) ) : ( (scaler_output_7 <= 0.3366645723581314) ? ( (scaler_output_2 <= 1.5692063570022583) ? ( 536 ) : ( 537 ) ) : ( (scaler_output_10 <= 1.1389848589897156) ? ( 539 ) : ( 540 ) ) ) ) ) ) ) ) : ( (scaler_output_10 <= 0.9304323792457581) ? ( (scaler_output_4 <= 0.3115357756614685) ? ( (scaler_output_6 <= -0.5827263593673706) ? ( (scaler_output_7 <= -0.6113656982779503) ? ( 545 ) : ( 546 ) ) : ( (scaler_output_10 <= 0.2541116774082184) ? ( 548 ) : ( (scaler_output_9 <= 0.6794380247592926) ? ( (scaler_output_11 <= 0.12922710925340652) ? ( 551 ) : ( (scaler_output_5 <= 1.7492794394493103) ? ( (scaler_output_11 <= 1.2132852673530579) ? ( 554 ) : ( (scaler_output_8 <= 0.6502339914441109) ? ( 556 ) : ( 557 ) ) ) : ( 558 ) ) ) : ( (scaler_output_10 <= 0.7514505386352539) ? ( (scaler_output_4 <= 0.08190092630684376) ? ( (scaler_output_2 <= 0.83873251080513) ? ( 562 ) : ( 563 ) ) : ( (scaler_output_6 <= 1.0065384209156036) ? ( 565 ) : ( 566 ) ) ) : ( (scaler_output_2 <= -1.0451210737228394) ? ( 568 ) : ( 569 ) ) ) ) ) ) : ( (scaler_output_5 <= 1.8917373418807983) ? ( (scaler_output_7 <= 0.14771009609103203) ? ( (scaler_output_2 <= 0.4927185885608196) ? ( (scaler_output_11 <= -0.04422220587730408) ? ( 574 ) : ( 575 ) ) : ( 576 ) ) : ( (scaler_output_8 <= 0.09243910014629364) ? ( (scaler_output_5 <= 1.0369899272918701) ? ( 579 ) : ( 580 ) ) : ( 581 ) ) ) : ( (scaler_output_4 <= 0.8741411566734314) ? ( 583 ) : ( 584 ) ) ) ) : ( (scaler_output_5 <= 1.0726044178009033) ? ( (scaler_output_11 <= 0.6929373443126678) ? ( (scaler_output_11 <= 0.3026764038950205) ? ( (scaler_output_8 <= -0.0669308677315712) ? ( (scaler_output_11 <= -0.17430918477475643) ? ( 590 ) : ( 591 ) ) : ( 592 ) ) : ( (scaler_output_3 <= 0.04821458458900452) ? ( 594 ) : ( 595 ) ) ) : ( (scaler_output_11 <= 0.8663866519927979) ? ( 597 ) : ( (scaler_output_9 <= 0.9793958216905594) ? ( 599 ) : ( 600 ) ) ) ) : ( (scaler_output_2 <= 1.4923143982887268) ? ( (scaler_output_5 <= 1.2506767511367798) ? ( (scaler_output_7 <= 0.7276049256324768) ? ( 604 ) : ( 605 ) ) : ( (scaler_output_10 <= 1.1078883111476898) ? ( 607 ) : ( (scaler_output_8 <= 0.09243911504745483) ? ( 609 ) : ( 610 ) ) ) ) : ( (scaler_output_6 <= 1.221303939819336) ? ( (scaler_output_8 <= -0.5450407862663269) ? ( 613 ) : ( 614 ) ) : ( 615 ) ) ) ) ) ) : ( (scaler_output_7 <= 0.43114182353019714) ? ( (scaler_output_11 <= -0.2610338404774666) ? ( (scaler_output_4 <= 1.3678560256958008) ? ( 619 ) : ( 620 ) ) : ( (scaler_output_4 <= 2.343804121017456) ? ( (scaler_output_9 <= 0.7846180498600006) ? ( (scaler_output_7 <= 0.2747657001018524) ? ( (scaler_output_10 <= 0.08035843819379807) ? ( 625 ) : ( (scaler_output_11 <= 1.6469085216522217) ? ( (scaler_output_2 <= 1.2231924533843994) ? ( (scaler_output_4 <= 2.2749136686325073) ? ( (scaler_output_11 <= 0.12922710925340652) ? ( 630 ) : ( (scaler_output_8 <= -1.1028356552124023) ? ( (scaler_output_2 <= 0.26204264536499977) ? ( 633 ) : ( 634 ) ) : ( (scaler_output_8 <= -0.9434657096862793) ? ( 636 ) : ( (scaler_output_5 <= 1.7492794394493103) ? ( 638 ) : ( 639 ) ) ) ) ) : ( 640 ) ) : ( 641 ) ) : ( (scaler_output_2 <= -0.007079273462295532) ? ( 643 ) : ( (scaler_output_8 <= -0.266143336892128) ? ( 645 ) : ( 646 ) ) ) ) ) : ( (scaler_output_4 <= 1.4252647757530212) ? ( 648 ) : ( (scaler_output_2 <= 1.1463004350662231) ? ( 650 ) : ( 651 ) ) ) ) : ( (scaler_output_2 <= 0.9925164729356766) ? ( 653 ) : ( 654 ) ) ) : ( (scaler_output_7 <= -0.06079140305519104) ? ( (scaler_output_6 <= -0.6543148756027222) ? ( 657 ) : ( 658 ) ) : ( 659 ) ) ) ) : ( (scaler_output_11 <= 1.0398359596729279) ? ( (scaler_output_8 <= -0.4653557986021042) ? ( (scaler_output_3 <= 0.04821458458900452) ? ( (scaler_output_9 <= 1.1546959280967712) ? ( 664 ) : ( 665 ) ) : ( (scaler_output_10 <= 1.0994031131267548) ? ( (scaler_output_10 <= 0.48711977899074554) ? ( 668 ) : ( 669 ) ) : ( 670 ) ) ) : ( (scaler_output_4 <= 1.3908195495605469) ? ( (scaler_output_6 <= 1.3644809126853943) ? ( 673 ) : ( 674 ) ) : ( (scaler_output_7 <= 1.4182661175727844) ? ( (scaler_output_7 <= 0.9849739670753479) ? ( 677 ) : ( 678 ) ) : ( 679 ) ) ) ) : ( (scaler_output_7 <= 2.262045681476593) ? ( (scaler_output_6 <= 1.579246461391449) ? ( (scaler_output_5 <= -0.3044886253774166) ? ( 683 ) : ( (scaler_output_5 <= 0.6808452047407627) ? ( 685 ) : ( 686 ) ) ) : ( 687 ) ) : ( (scaler_output_2 <= -0.8913370966911316) ? ( 689 ) : ( 690 ) ) ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_output_2", "scaler_output_3", "scaler_output_4", "scaler_output_5", "scaler_output_6", "scaler_output_7", "scaler_output_8", "scaler_output_9", "scaler_output_10", "scaler_output_11" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any scaler_output_2, std::any scaler_output_3, std::any scaler_output_4, std::any scaler_output_5, std::any scaler_output_6, std::any scaler_output_7, std::any scaler_output_8, std::any scaler_output_9, std::any scaler_output_10, std::any scaler_output_11) {
			int lNodeIndex = get_decision_tree_node_index(scaler_output_2, scaler_output_3, scaler_output_4, scaler_output_5, scaler_output_6, scaler_output_7, scaler_output_8, scaler_output_9, scaler_output_10, scaler_output_11);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("scaler_output_2")[0], iTable.at("scaler_output_3")[0], iTable.at("scaler_output_4")[0], iTable.at("scaler_output_5")[0], iTable.at("scaler_output_6")[0], iTable.at("scaler_output_7")[0], iTable.at("scaler_output_8")[0], iTable.at("scaler_output_9")[0], iTable.at("scaler_output_10")[0], iTable.at("scaler_output_11")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable;

		std::any  lEstimator = lTable_model[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/diabetes.csv");
	return 0;
}
