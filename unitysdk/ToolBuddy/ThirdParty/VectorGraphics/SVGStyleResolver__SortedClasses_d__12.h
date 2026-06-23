#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class SVGStyleResolver; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C6165F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C616C30)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C616BC0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C616CB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C616C20)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C616BD0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6163D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x1C616340)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C616500)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1C616510)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver__SortedClasses_d__12_TypeDefinitionIndex = 31140;

	class SVGStyleResolver__SortedClasses_d__12 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* __3__classes; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::SVGStyleResolver* __4__this; // 0x18
		::System::String* __2__current; // 0x20
		::System::Collections::Generic::List_1_Enumerator<::System::String*> __7__wrap1; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* classes; // 0x40
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap2; // 0x48
		::System::Int32 __l__initialThreadId; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12___M__FINALLY2_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGSTYLERESOLVER__SORTEDCLASSES_D__12_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
