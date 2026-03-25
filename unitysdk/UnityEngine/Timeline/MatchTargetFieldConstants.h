#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"

#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET UNITYSDK_OFFSET(0x189ADC30)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x189ADC70)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x189ADC80)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MatchTargetFieldConstants_TypeDefinitionIndex = 29821;

	class MatchTargetFieldConstants : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_All()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x10800);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Rotation()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x10804);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_None()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x10808);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Position()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x1080C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::Boolean HasAny(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields fields)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET))(me, fields);
		}

		static ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields flag)
		{
			return ((::UnityEngine::Timeline::MatchTargetFields(*)(::UnityEngine::Timeline::MatchTargetFields, ::UnityEngine::Timeline::MatchTargetFields))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET))(me, flag);
		}
	};
}
