// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : LogisticRegression
// Dataset : FourClass_100

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_LogisticRegression_FourClass_100.exe ml2cpp-demo_LogisticRegression_FourClass_100.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2, 3 };

		return lClasses;
	}

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29", "Feature_30", "Feature_31", "Feature_32", "Feature_33", "Feature_34", "Feature_35", "Feature_36", "Feature_37", "Feature_38", "Feature_39", "Feature_40", "Feature_41", "Feature_42", "Feature_43", "Feature_44", "Feature_45", "Feature_46", "Feature_47", "Feature_48", "Feature_49", "Feature_50", "Feature_51", "Feature_52", "Feature_53", "Feature_54", "Feature_55", "Feature_56", "Feature_57", "Feature_58", "Feature_59", "Feature_60", "Feature_61", "Feature_62", "Feature_63", "Feature_64", "Feature_65", "Feature_66", "Feature_67", "Feature_68", "Feature_69", "Feature_70", "Feature_71", "Feature_72", "Feature_73", "Feature_74", "Feature_75", "Feature_76", "Feature_77", "Feature_78", "Feature_79", "Feature_80", "Feature_81", "Feature_82", "Feature_83", "Feature_84", "Feature_85", "Feature_86", "Feature_87", "Feature_88", "Feature_89", "Feature_90", "Feature_91", "Feature_92", "Feature_93", "Feature_94", "Feature_95", "Feature_96", "Feature_97", "Feature_98", "Feature_99" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1", "Score_2", "Score_3",
			"Proba_0", "Proba_1", "Proba_2", "Proba_3",
			"LogProba_0", "LogProba_1", "LogProba_2", "LogProba_3",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29, std::any Feature_30, std::any Feature_31, std::any Feature_32, std::any Feature_33, std::any Feature_34, std::any Feature_35, std::any Feature_36, std::any Feature_37, std::any Feature_38, std::any Feature_39, std::any Feature_40, std::any Feature_41, std::any Feature_42, std::any Feature_43, std::any Feature_44, std::any Feature_45, std::any Feature_46, std::any Feature_47, std::any Feature_48, std::any Feature_49, std::any Feature_50, std::any Feature_51, std::any Feature_52, std::any Feature_53, std::any Feature_54, std::any Feature_55, std::any Feature_56, std::any Feature_57, std::any Feature_58, std::any Feature_59, std::any Feature_60, std::any Feature_61, std::any Feature_62, std::any Feature_63, std::any Feature_64, std::any Feature_65, std::any Feature_66, std::any Feature_67, std::any Feature_68, std::any Feature_69, std::any Feature_70, std::any Feature_71, std::any Feature_72, std::any Feature_73, std::any Feature_74, std::any Feature_75, std::any Feature_76, std::any Feature_77, std::any Feature_78, std::any Feature_79, std::any Feature_80, std::any Feature_81, std::any Feature_82, std::any Feature_83, std::any Feature_84, std::any Feature_85, std::any Feature_86, std::any Feature_87, std::any Feature_88, std::any Feature_89, std::any Feature_90, std::any Feature_91, std::any Feature_92, std::any Feature_93, std::any Feature_94, std::any Feature_95, std::any Feature_96, std::any Feature_97, std::any Feature_98, std::any Feature_99) {
		auto lClasses = get_classes();

		std::any score_0 = -0.19481248284276886 * Feature_0 + 0.026256991310801666 * Feature_1 + -0.17326416745611853 * Feature_2 + -0.03207460634597155 * Feature_3 + 0.11592650940692424 * Feature_4 + 0.06456987042731145 * Feature_5 + 0.161892825418191 * Feature_6 + -0.06758218355087256 * Feature_7 + 0.058640253903888356 * Feature_8 + -0.12630278229561218 * Feature_9 + 0.27026107360699514 * Feature_10 + -0.16373212540599288 * Feature_11 + -0.011657982575930734 * Feature_12 + 0.15521114335818523 * Feature_13 + 0.15508171957637876 * Feature_14 + 0.26352598859387144 * Feature_15 + 0.13576553381635653 * Feature_16 + -0.02936650513305716 * Feature_17 + 0.11611443147033966 * Feature_18 + 0.3256333285619097 * Feature_19 + -0.46431331990784225 * Feature_20 + 0.11747250818229361 * Feature_21 + 0.14371191488568466 * Feature_22 + 0.06642481901627176 * Feature_23 + 0.22019804303876464 * Feature_24 + -0.0391524501372552 * Feature_25 + 0.013128726020781365 * Feature_26 + -0.15553318074398828 * Feature_27 + 0.06939789582141441 * Feature_28 + -0.22070514660225024 * Feature_29 + 0.13673102396431402 * Feature_30 + -0.08553808577876562 * Feature_31 + -0.011420500283906026 * Feature_32 + -0.1961495944092258 * Feature_33 + -0.13342404693859608 * Feature_34 + 0.06949476108585428 * Feature_35 + -0.0012240043876780387 * Feature_36 + 0.23223395537014835 * Feature_37 + -0.32876301166485256 * Feature_38 + -0.2537964292867171 * Feature_39 + 0.1490051384996882 * Feature_40 + -0.25384943135254473 * Feature_41 + 0.07876017118708419 * Feature_42 + 0.2410350685005271 * Feature_43 + -0.19720667940507658 * Feature_44 + -0.0020275279422141542 * Feature_45 + -0.061834758667817374 * Feature_46 + -0.11092212851618653 * Feature_47 + -0.22036666773839023 * Feature_48 + 0.03842740101936524 * Feature_49 + 0.35263570989581994 * Feature_50 + -0.030875527956343213 * Feature_51 + 0.11175762780018819 * Feature_52 + -0.30019211457788536 * Feature_53 + 0.10330981757509465 * Feature_54 + -0.13097741579726688 * Feature_55 + 0.14555869149331369 * Feature_56 + 0.08306239991795397 * Feature_57 + 0.005719480687531041 * Feature_58 + 0.06106597307067848 * Feature_59 + -0.04710441818407113 * Feature_60 + 0.11806987988037963 * Feature_61 + 0.20434839537272723 * Feature_62 + -0.07342104061040981 * Feature_63 + -0.05485049001633371 * Feature_64 + -0.334461496375834 * Feature_65 + -0.15046425117350887 * Feature_66 + 0.10509972659004423 * Feature_67 + 0.2024662306241655 * Feature_68 + 0.17112212071870608 * Feature_69 + -0.16839199418657547 * Feature_70 + 0.0881630967334511 * Feature_71 + 0.03100510622158316 * Feature_72 + 0.17968826157444648 * Feature_73 + -0.08034133992795674 * Feature_74 + 0.0759126023149324 * Feature_75 + -0.111079493581285 * Feature_76 + 0.11518461995974118 * Feature_77 + 0.4650030014006239 * Feature_78 + -0.31880764805272305 * Feature_79 + 0.080581021582381 * Feature_80 + -0.12135895492742985 * Feature_81 + -0.20907230658647172 * Feature_82 + 0.08412027039317518 * Feature_83 + 0.062274939129918085 * Feature_84 + 0.08347366020350941 * Feature_85 + 0.010500754955855267 * Feature_86 + -0.039527556986024344 * Feature_87 + -0.12182491809017189 * Feature_88 + -0.12548758501949867 * Feature_89 + -0.051325292298552226 * Feature_90 + -0.1798834168732398 * Feature_91 + -0.44997364984713756 * Feature_92 + 0.2077861476894003 * Feature_93 + -0.1349164938728483 * Feature_94 + 0.2044457356257304 * Feature_95 + -0.029144451417313054 * Feature_96 + -0.1816400090003326 * Feature_97 + 0.07499135577569666 * Feature_98 + 0.3292698579537385 * Feature_99 + 0.7729874273719598;

		std::any logistic_0 = logistic(score_0);

		std::any score_1 = -0.050708229578944976 * Feature_0 + 0.0012623295824389896 * Feature_1 + 0.3353923855384041 * Feature_2 + 0.22347135287338912 * Feature_3 + -0.1821878162080943 * Feature_4 + -0.12297388147630774 * Feature_5 + 0.04776779571065097 * Feature_6 + 0.24923447006221222 * Feature_7 + -0.0843084452697471 * Feature_8 + 0.3375561984587964 * Feature_9 + -0.009125452379142977 * Feature_10 + -0.034162877569000286 * Feature_11 + -0.08561287455372087 * Feature_12 + -0.1714478104950359 * Feature_13 + -0.3216302563163526 * Feature_14 + -0.23000720492619864 * Feature_15 + 0.09772970192697011 * Feature_16 + 0.10600777420498025 * Feature_17 + -0.19707669925433877 * Feature_18 + -0.29575055588469684 * Feature_19 + -0.10810178398296491 * Feature_20 + -0.10381059434807775 * Feature_21 + -0.04283169675499621 * Feature_22 + -0.2981785417524623 * Feature_23 + -0.23965915301409366 * Feature_24 + -0.28485805069134223 * Feature_25 + 0.10019566571152129 * Feature_26 + 0.20706199698437808 * Feature_27 + -0.24376667413680303 * Feature_28 + -0.1572065562483542 * Feature_29 + -0.09934948196440456 * Feature_30 + 0.05546753686411336 * Feature_31 + -0.057024062058061493 * Feature_32 + 0.09477563066658619 * Feature_33 + -0.05629074640087275 * Feature_34 + 0.10175840507580845 * Feature_35 + -0.10671732999845693 * Feature_36 + 0.10485406419887482 * Feature_37 + -0.23935596341319265 * Feature_38 + 0.1285024193804388 * Feature_39 + -0.27569146411968715 * Feature_40 + 0.23369395380449928 * Feature_41 + -0.0077063884741845655 * Feature_42 + -0.03338969209752744 * Feature_43 + 0.33884414424218795 * Feature_44 + 0.1638770565624893 * Feature_45 + 0.014145326759931348 * Feature_46 + 0.07940221652908434 * Feature_47 + 0.13976214942193793 * Feature_48 + -0.02139672478775512 * Feature_49 + -0.3058017557979677 * Feature_50 + -0.11263625390558703 * Feature_51 + -0.13630042010720086 * Feature_52 + -0.176476643170684 * Feature_53 + -0.014504055153181952 * Feature_54 + 0.20628477357036146 * Feature_55 + 0.023943729514084564 * Feature_56 + 0.07333708312079616 * Feature_57 + 0.06036867016915423 * Feature_58 + 0.019352399923054018 * Feature_59 + 0.20789887928929546 * Feature_60 + 0.06749229155656779 * Feature_61 + -0.13586027853978508 * Feature_62 + 0.05072439063145325 * Feature_63 + 0.26374291283155793 * Feature_64 + 0.3609224590106763 * Feature_65 + 0.12334706951790474 * Feature_66 + -0.3403341362596538 * Feature_67 + 0.29602137260782246 * Feature_68 + -0.10179099470416998 * Feature_69 + 0.02790713887142581 * Feature_70 + -0.22026770684886052 * Feature_71 + 0.03626974342446029 * Feature_72 + -0.007489503749352583 * Feature_73 + 0.37345586560932864 * Feature_74 + 0.12936229548297362 * Feature_75 + -0.08433672012409496 * Feature_76 + -0.00911228587991873 * Feature_77 + 0.0682791534009307 * Feature_78 + -0.03196786159447814 * Feature_79 + -0.3644506054894168 * Feature_80 + 0.03284709169217813 * Feature_81 + 0.03040830097553647 * Feature_82 + -0.021097233869724723 * Feature_83 + 0.012415777334224021 * Feature_84 + 0.13107342640178005 * Feature_85 + -0.054956425662970945 * Feature_86 + 0.08470685031208235 * Feature_87 + 0.24638685982038439 * Feature_88 + -0.22893031076052334 * Feature_89 + 0.348556341643809 * Feature_90 + 0.22299294735806172 * Feature_91 + 0.2915941322004503 * Feature_92 + 0.24024722931719017 * Feature_93 + 0.41177653557130467 * Feature_94 + -0.058764439312890604 * Feature_95 + -0.11548758930881242 * Feature_96 + 0.14638541128118493 * Feature_97 + 0.052411593820302464 * Feature_98 + -0.17014786801113638 * Feature_99 + 0.42642530329159295;

		std::any logistic_1 = logistic(score_1);

		std::any score_2 = -0.020758323291280783 * Feature_0 + -0.10456033259080541 * Feature_1 + -0.3844933722319986 * Feature_2 + -0.1220345952822754 * Feature_3 + 0.058319869048471376 * Feature_4 + 0.198892023887782 * Feature_5 + -0.10031082965298936 * Feature_6 + -0.132122052316733 * Feature_7 + -0.02691720087225054 * Feature_8 + 0.035816032023124056 * Feature_9 + -0.3152708678623585 * Feature_10 + 0.07468169587364133 * Feature_11 + -0.020125508307151704 * Feature_12 + -0.11345007397705477 * Feature_13 + -0.022301733766075617 * Feature_14 + -0.1351142720571196 * Feature_15 + -0.09726719721926952 * Feature_16 + -0.22256661544374975 * Feature_17 + -0.023972137174681166 * Feature_18 + -0.22161519018057946 * Feature_19 + 0.2033199259816837 * Feature_20 + -0.047007706298791904 * Feature_21 + -0.06751346719603447 * Feature_22 + 0.06436248264242082 * Feature_23 + -0.05578196239511971 * Feature_24 + 0.16200278182480435 * Feature_25 + 0.03316397585900694 * Feature_26 + 0.23887543589660165 * Feature_27 + 0.1611092525715816 * Feature_28 + 0.12794121204730946 * Feature_29 + 0.12084328225229778 * Feature_30 + 0.12516604932163114 * Feature_31 + 0.1241908232876263 * Feature_32 + 0.058901572885137865 * Feature_33 + 0.0260932658281733 * Feature_34 + -0.25514869918047633 * Feature_35 + -0.13359533215146752 * Feature_36 + -0.09137815677454786 * Feature_37 + 0.41770734805901133 * Feature_38 + -0.09718705295029792 * Feature_39 + 0.14262157648538598 * Feature_40 + 0.010910432644714446 * Feature_41 + -0.11694730529967981 * Feature_42 + -0.29940930593665743 * Feature_43 + -0.6493365887443856 * Feature_44 + -0.04168616563333465 * Feature_45 + 0.07958105870424718 * Feature_46 + 0.31776728958659417 * Feature_47 + 0.06019584467489048 * Feature_48 + -0.14212649003639352 * Feature_49 + -0.029967722178827535 * Feature_50 + -0.18010995074623093 * Feature_51 + 0.12393317718970003 * Feature_52 + 0.3508906641208419 * Feature_53 + -0.36294773420611426 * Feature_54 + 0.03149416769843637 * Feature_55 + -0.3121682135742936 * Feature_56 + 0.12299504710289766 * Feature_57 + 0.06530610045512687 * Feature_58 + -0.19306180342094145 * Feature_59 + -0.17830773031883235 * Feature_60 + -0.18443747566343927 * Feature_61 + -0.1128902124711059 * Feature_62 + 0.10870845518314093 * Feature_63 + -0.0446353785239215 * Feature_64 + -0.05062703000209647 * Feature_65 + -0.010711187360693653 * Feature_66 + 0.03980076577996249 * Feature_67 + -0.2926951891361805 * Feature_68 + -0.21290931732861618 * Feature_69 + 0.1590397908894968 * Feature_70 + 0.29296916798821326 * Feature_71 + 0.10774908187198284 * Feature_72 + -0.21169285906785654 * Feature_73 + -0.0458851465634909 * Feature_74 + -0.18672482364732101 * Feature_75 + 0.1420018586534682 * Feature_76 + -0.04507721487138601 * Feature_77 + -0.24377425993961438 * Feature_78 + 0.31769903952444173 * Feature_79 + 0.10552785148158798 * Feature_80 + 0.24681656692477957 * Feature_81 + 0.051302777823482124 * Feature_82 + 0.10367846874733917 * Feature_83 + -0.04300821281735548 * Feature_84 + 0.20996214751894152 * Feature_85 + 0.10637032013232739 * Feature_86 + -0.06415072035286229 * Feature_87 + -0.050828031387526264 * Feature_88 + 0.12830832913410495 * Feature_89 + -0.13895749382965278 * Feature_90 + -0.034270894605875936 * Feature_91 + 0.19812041312108455 * Feature_92 + -0.17236104752651057 * Feature_93 + -0.11217353088602526 * Feature_94 + -0.13728431538850686 * Feature_95 + 0.0391021242686239 * Feature_96 + 0.16567382130421385 * Feature_97 + -0.045696291619874985 * Feature_98 + 0.31317504139997543 * Feature_99 + -0.7244816264910535;

		std::any logistic_2 = logistic(score_2);

		std::any score_3 = 0.26627903571299216 * Feature_0 + 0.07704101169756362 * Feature_1 + 0.22236515414971392 * Feature_2 + -0.06936215124514146 * Feature_3 + 0.007941437752698068 * Feature_4 + -0.14048801283878654 * Feature_5 + -0.10934979147585638 * Feature_6 + -0.04953023419460556 * Feature_7 + 0.05258539223810623 * Feature_8 + -0.24706944818630758 * Feature_9 + 0.05413524663450445 * Feature_10 + 0.12321330710135424 * Feature_11 + 0.11739636543680343 * Feature_12 + 0.1296867411139086 * Feature_13 + 0.18885027050604875 * Feature_14 + 0.10159548838944701 * Feature_15 + -0.13622803852405674 * Feature_16 + 0.14592534637182775 * Feature_17 + 0.10493440495867767 * Feature_18 + 0.19173241750336578 * Feature_19 + 0.3690951779091227 * Feature_20 + 0.03334579246457843 * Feature_21 + -0.033366750934653244 * Feature_22 + 0.16739124009377157 * Feature_23 + 0.0752430723704497 * Feature_24 + 0.16200771900379643 * Feature_25 + -0.14648836759130723 * Feature_26 + -0.2904042521369902 * Feature_27 + 0.013259525743805104 * Feature_28 + 0.2499704908032925 * Feature_29 + -0.1582248242522057 * Feature_30 + -0.09509550040697694 * Feature_31 + -0.055746260945659785 * Feature_32 + 0.04247239085750007 * Feature_33 + 0.16362152751129785 * Feature_34 + 0.0838955330188129 * Feature_35 + 0.241536666537602 * Feature_36 + -0.2457098627944769 * Feature_37 + 0.15041162701903277 * Feature_38 + 0.2224810628565759 * Feature_39 + -0.01593525086538193 * Feature_40 + 0.009245044903332481 * Feature_41 + 0.0458935225867792 * Feature_42 + 0.09176392953365718 * Feature_43 + 0.5076991239072774 * Feature_44 + -0.12016336298693717 * Feature_45 + -0.031891626796358534 * Feature_46 + -0.28624737759948876 * Feature_47 + 0.02040867364155462 * Feature_48 + 0.12509581380477983 * Feature_49 + -0.01686623191903343 * Feature_50 + 0.32362173260815924 * Feature_51 + -0.09939038488268556 * Feature_52 + 0.12577809362773248 * Feature_53 + 0.2741419717842012 * Feature_54 + -0.1068015254715316 * Feature_55 + 0.14266579256691284 * Feature_56 + -0.27939453014164856 * Feature_57 + -0.13139425131180468 * Feature_58 + 0.11264343042720777 * Feature_59 + 0.017513269213606332 * Feature_60 + -0.001124695773507613 * Feature_61 + 0.04440209563816283 * Feature_62 + -0.08601180520418754 * Feature_63 + -0.16425704429130314 * Feature_64 + 0.024166067367250327 * Feature_65 + 0.03782836901629721 * Feature_66 + 0.1954336438896485 * Feature_67 + -0.20579241409580185 * Feature_68 + 0.1435781913140825 * Feature_69 + -0.01855493557434804 * Feature_70 + -0.1608645578728049 * Feature_71 + -0.1750239315180273 * Feature_72 + 0.0394941012427634 * Feature_73 + -0.2472293791178815 * Feature_74 + -0.018550074150584787 * Feature_75 + 0.05341435505191253 * Feature_76 + -0.060995119208437205 * Feature_77 + -0.2895078948619435 * Feature_78 + 0.03307647012275767 * Feature_79 + 0.17834173242544626 * Feature_80 + -0.15830470368952793 * Feature_81 + 0.12736122778744882 * Feature_82 + -0.16670150527079153 * Feature_83 + -0.03168250364678755 * Feature_84 + -0.4245092341242284 * Feature_85 + -0.06191464942521244 * Feature_86 + 0.018971427026805876 * Feature_87 + -0.07373391034269186 * Feature_88 + 0.226109566645919 * Feature_89 + -0.15827355551560332 * Feature_90 + -0.008838635878945806 * Feature_91 + -0.039740895474397596 * Feature_92 + -0.27567232948007886 * Feature_93 + -0.16468651081243216 * Feature_94 + -0.00839698092432808 * Feature_95 + 0.10552991645750551 * Feature_96 + -0.13041922358506855 * Feature_97 + -0.08170665797612334 * Feature_98 + -0.4722970313425873 * Feature_99 + -0.47493110417249473;

		std::any logistic_3 = logistic(score_3);

		tTable lScores = tTable();

		lScores["Score"] = { 
			score_0,
			score_1,
			score_2,
			score_3
		};

		tTable lSoftMaxTable = soft_max(lScores, false);


		tTable lTable = lSoftMaxTable;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0], iTable.at("Feature_30")[0], iTable.at("Feature_31")[0], iTable.at("Feature_32")[0], iTable.at("Feature_33")[0], iTable.at("Feature_34")[0], iTable.at("Feature_35")[0], iTable.at("Feature_36")[0], iTable.at("Feature_37")[0], iTable.at("Feature_38")[0], iTable.at("Feature_39")[0], iTable.at("Feature_40")[0], iTable.at("Feature_41")[0], iTable.at("Feature_42")[0], iTable.at("Feature_43")[0], iTable.at("Feature_44")[0], iTable.at("Feature_45")[0], iTable.at("Feature_46")[0], iTable.at("Feature_47")[0], iTable.at("Feature_48")[0], iTable.at("Feature_49")[0], iTable.at("Feature_50")[0], iTable.at("Feature_51")[0], iTable.at("Feature_52")[0], iTable.at("Feature_53")[0], iTable.at("Feature_54")[0], iTable.at("Feature_55")[0], iTable.at("Feature_56")[0], iTable.at("Feature_57")[0], iTable.at("Feature_58")[0], iTable.at("Feature_59")[0], iTable.at("Feature_60")[0], iTable.at("Feature_61")[0], iTable.at("Feature_62")[0], iTable.at("Feature_63")[0], iTable.at("Feature_64")[0], iTable.at("Feature_65")[0], iTable.at("Feature_66")[0], iTable.at("Feature_67")[0], iTable.at("Feature_68")[0], iTable.at("Feature_69")[0], iTable.at("Feature_70")[0], iTable.at("Feature_71")[0], iTable.at("Feature_72")[0], iTable.at("Feature_73")[0], iTable.at("Feature_74")[0], iTable.at("Feature_75")[0], iTable.at("Feature_76")[0], iTable.at("Feature_77")[0], iTable.at("Feature_78")[0], iTable.at("Feature_79")[0], iTable.at("Feature_80")[0], iTable.at("Feature_81")[0], iTable.at("Feature_82")[0], iTable.at("Feature_83")[0], iTable.at("Feature_84")[0], iTable.at("Feature_85")[0], iTable.at("Feature_86")[0], iTable.at("Feature_87")[0], iTable.at("Feature_88")[0], iTable.at("Feature_89")[0], iTable.at("Feature_90")[0], iTable.at("Feature_91")[0], iTable.at("Feature_92")[0], iTable.at("Feature_93")[0], iTable.at("Feature_94")[0], iTable.at("Feature_95")[0], iTable.at("Feature_96")[0], iTable.at("Feature_97")[0], iTable.at("Feature_98")[0], iTable.at("Feature_99")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/FourClass_100.csv");
	return 0;
}