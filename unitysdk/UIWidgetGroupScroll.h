#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UIWidgetGroup.h"

class MonoUITableScrollV2;
class ShowWidgetListData;
namespace MoleMole { class UIWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define UIWIDGETGROUPSCROLL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E82BC60)
#define UIWIDGETGROUPSCROLL_GETWIDGETBYINDEX_OFFSET UNITYSDK_OFFSET(0x1E82BBC0)
#define UIWIDGETGROUPSCROLL_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E82BC10)
#define UIWIDGETGROUPSCROLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82BD00)
#define UIWIDGETGROUPSCROLL___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E82BD80)

inline static constexpr unsigned int UIWidgetGroupScroll_TypeDefinitionIndex = 76982;

class UIWidgetGroupScroll : public ::UIWidgetGroup
{
public:
	::MonoUITableScrollV2* _scroll; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUPSCROLL__CTOR_OFFSET))(this);
	}

	::MoleMole::UIWidgetController* GetWidgetByIndex(::System::Int32 index)
	{
		return ((::MoleMole::UIWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UIWIDGETGROUPSCROLL_GETWIDGETBYINDEX_OFFSET))(this, index);
	}

	::System::Void SetData(::MonoUITableScrollV2* scroll)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + UIWIDGETGROUPSCROLL_SETDATA_OFFSET))(this, scroll);
	}

	::System::Void Destroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUPSCROLL_DESTROY_OFFSET))(this);
	}

	::System::Void __base_Destroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUPSCROLL___BASE_DESTROY_OFFSET))(this);
	}
};
