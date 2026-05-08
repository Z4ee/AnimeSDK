#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/MatchTargetFields.h"

#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_HASANY_OFFSET UNITYSDK_OFFSET(0x1C448700)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_TOGGLE_OFFSET UNITYSDK_OFFSET(0x1C448760)
#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C448770)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MatchTargetFieldConstants_TypeDefinitionIndex = 30706;

	class MatchTargetFieldConstants : public ::System::Object
	{
	public:
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_All()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x7AD0);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Rotation()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x7AD4);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_Position()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x7AD8);
		}
		static ::UnityEngine::Timeline::MatchTargetFields* StaticGet_None()
		{
			return (::UnityEngine::Timeline::MatchTargetFields*)Il2CppClass::FromTypeDefinitionIndex(MatchTargetFieldConstants_TypeDefinitionIndex)->GetStaticField(0x7ADC);
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
