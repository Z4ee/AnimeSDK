#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3C05C0)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3C0600)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1A3C0610)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1A3C0620)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeUtility___c_TypeDefinitionIndex = 36723;

	class TimeUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x63EF0);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x63EF8);
		}
		static ::UnityEngine::Timeline::TimeUtility___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TimeUtility___c**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x63F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ParseTimeCode_b__15_0(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _ParseTimeCode_b__15_1(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__15_1_OFFSET))(this, a1);
		}
	};
}
