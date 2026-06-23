#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2AE0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB2B20)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__SORTSUBTRACKBYNAME_B__60_0_OFFSET UNITYSDK_OFFSET(0x1DFB2B30)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset___c_TypeDefinitionIndex = 32275;

	class TimelineAsset___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::ScriptableObject*>** StaticGet___9__60_0()
		{
			return (::System::Comparison_1<::UnityEngine::ScriptableObject*>**)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset___c_TypeDefinitionIndex)->GetStaticField(0x268B0);
		}
		static ::UnityEngine::Timeline::TimelineAsset___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::TimelineAsset___c**)Il2CppClass::FromTypeDefinitionIndex(TimelineAsset___c_TypeDefinitionIndex)->GetStaticField(0x268B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortSubTrackByName_b__60_0(::UnityEngine::ScriptableObject* lhs, ::UnityEngine::ScriptableObject* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__SORTSUBTRACKBYNAME_B__60_0_OFFSET))(this, lhs, rhs);
		}
	};
}
