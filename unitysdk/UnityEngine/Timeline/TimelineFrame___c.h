#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB116F0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB11730)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__REFRESHVALUE_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BB11740)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineFrame___c_TypeDefinitionIndex = 30745;

	class TimelineFrame___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::TimelineFrame___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TimelineFrame___c**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame___c_TypeDefinitionIndex)->GetStaticField(0x24D60);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TimelineFrame___c_TypeDefinitionIndex)->GetStaticField(0x24D68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshValue_b__28_0(::System::Int32 item1, ::System::Int32 item2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__REFRESHVALUE_B__28_0_OFFSET))(this, item1, item2);
		}
	};
}
