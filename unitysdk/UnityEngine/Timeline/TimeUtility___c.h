#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA45400)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA45440)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1BA45450)
#define UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__14_1_OFFSET UNITYSDK_OFFSET(0x1BA454E0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimeUtility___c_TypeDefinitionIndex = 30887;

	class TimeUtility___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::TimeUtility___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TimeUtility___c**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x24FF0);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x24FF8);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TimeUtility___c_TypeDefinitionIndex)->GetStaticField(0x25000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ParseTimeCode_b__14_0(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__14_0_OFFSET))(this, c);
		}

		::System::Boolean _ParseTimeCode_b__14_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMEUTILITY___C__PARSETIMECODE_B__14_1_OFFSET))(this, c);
		}
	};
}
