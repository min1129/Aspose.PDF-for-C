﻿#ifndef _Aspose_Pdf_InteractiveFeatures_FitExplicitDestination_h_
#define _Aspose_Pdf_InteractiveFeatures_FitExplicitDestination_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "InteractiveFeatures/ExplicitDestination.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Represents explicit destination that displays the page with its contents magnified just enough to fit the entire page within the window both horizontally and vertically. If the required horizontal and vertical magnification factors are different, use the smaller of the two, centering the page within the window in the other dimension.
/// </summary>
class ASPOSE_PDF_SHARED_API FitExplicitDestination FINAL : public Aspose::Pdf::InteractiveFeatures::ExplicitDestination
{
    typedef FitExplicitDestination ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::ExplicitDestination BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    
public:

    FitExplicitDestination(System::SharedPtr<Aspose::Pdf::Page> page);
    FitExplicitDestination(System::SharedPtr<Document> document, int32_t pageNumber);
    FitExplicitDestination(int32_t pageNumber);
    
    virtual System::String ToString();
    
protected:

    FitExplicitDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> engineDest);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FitExplicitDestination"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_FitExplicitDestination_h_
