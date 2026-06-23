#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ShowWidgetListData;
namespace MoleMole { class UIWidgetController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UIWIDGETGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A5162A0)
#define UIWIDGETGROUP_GETALLCHILDLIST_OFFSET UNITYSDK_OFFSET(0x1A516260)
#define UIWIDGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A516310)

inline static constexpr unsigned int UIWidgetGroup_TypeDefinitionIndex = 75330;

class UIWidgetGroup : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _childList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* GetAllChildList()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP_GETALLCHILDLIST_OFFSET))(this);
	}

	::System::Void Destroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP_DESTROY_OFFSET))(this);
	}
};
