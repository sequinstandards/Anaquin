#include "tools/tools.hpp"
#include "data/resources.hpp"

#include "resources/rna.txt"
#include "resources/meta.txt"
#include "resources/norm.txt"
#include "resources/split.txt"
#include "resources/anaquin.txt"
#include "resources/somatic.txt"
#include "resources/germline.txt"
#include "resources/calibrate.txt"
#include "resources/broad_bam.txt"
#include "resources/broad_vcf.txt"

#include "resources/report.py"
#include "resources/style.css"
#include "resources/norm.html"
#include "resources/gSplit.html"
#include "resources/rSplit.html"
#include "resources/mSplit.html"
#include "resources/somatic.html"
#include "resources/germline.html"
#include "resources/calibrate.html"

#include "resources/plotGene.R"
#include "resources/plotNorm.R"
#include "resources/plotAllele.R"
#include "resources/plotLinear.R"
#include "resources/plotInsert.R"
#include "resources/plotSomatic.R"
#include "resources/plotLDensity.R"
#include "resources/plotKSomatic.R"
#include "resources/plotLogistic.R"
#include "resources/plotKSynthetic.R"
#include "resources/plotQualFilter.R"
#include "resources/plotStrelkaROC.R"
#include "resources/plotSplitSomatic.R"

using namespace Anaquin;

static std::string clean(const std::string &x)
{
    return x.substr(0, x.find("<<@@@@>>"));
}

typedef std::string Scripts;
#define ToString(x) clean(std::string(reinterpret_cast<char*>(x)))

Scripts Anaquin::CSS()           { return ToString(scripts_template_style_css);      }
Scripts Anaquin::PReport()       { return ToString(scripts_report_py);               }
Scripts Anaquin::NormHTML()      { return ToString(scripts_template_norm_html);      }
Scripts Anaquin::GermHTML()      { return ToString(scripts_template_germline_html);  }
Scripts Anaquin::SomaHTML()      { return ToString(scripts_template_somatic_html);   }
Scripts Anaquin::GSplitHTML()    { return ToString(scripts_template_gSplit_html);    }
Scripts Anaquin::RSplitHTML()    { return ToString(scripts_template_rSplit_html);    }
Scripts Anaquin::MSplitHTML()    { return ToString(scripts_template_mSplit_html);    }
Scripts Anaquin::CalibrateHTML() { return ToString(scripts_template_calibrate_html); }

Scripts Manual() { return ToString(data_manuals_anaquin_txt); }

Scripts Anaquin::PlotGene()         { return ToString(src_r_plotGene_R);       }
Scripts Anaquin::PlotNorm()         { return ToString(src_r_plotNorm_R);       }
Scripts Anaquin::PlotLinear()       { return ToString(src_r_plotLinear_R);     }
Scripts Anaquin::PlotInsert()       { return ToString(src_r_plotInsert_R);     }
Scripts Anaquin::PlotAllele()       { return ToString(src_r_plotAllele_R);     }
Scripts Anaquin::PlotSomatic()      { return ToString(src_r_plotSomatic_R);    }
Scripts Anaquin::PlotLDensity()     { return ToString(src_r_plotLDensity_R);   }

Scripts Anaquin::PlotKSomatic()     { return ToString(src_r_plotKSomatic_R);   }
Scripts Anaquin::PlotKSynthetic()   { return ToString(src_r_plotKSynthetic_R); }
Scripts Anaquin::PlotStrelkaROC()   { return ToString(src_r_plotStrelkaROC_R); }
Scripts Anaquin::PlotQualFilter()   { return ToString(src_r_plotQualFilter_R); }
Scripts Anaquin::PlotSplitSomatic() { return ToString(src_r_plotSplitSomatic_R); }

Scripts Anaquin::rna()       { return ToString(data_manuals_rna_txt);       }
Scripts Anaquin::meta()      { return ToString(data_manuals_meta_txt);      }
Scripts Anaquin::norm()      { return ToString(data_manuals_norm_txt);      }
Scripts Anaquin::split()     { return ToString(data_manuals_split_txt);     }
Scripts Anaquin::somatic()   { return ToString(data_manuals_somatic_txt);   }
Scripts Anaquin::germline()  { return ToString(data_manuals_germline_txt);  }
Scripts Anaquin::calibrate() { return ToString(data_manuals_calibrate_txt); }
Scripts Anaquin::broadBAM()  { return ToString(data_manuals_broad_bam_txt); }
Scripts Anaquin::broadVCF()  { return ToString(data_manuals_broad_vcf_txt); }