#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8C1F0)
#define UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS61_0__SORTTRACKS_B__0_OFFSET UNITYSDK_OFFSET(0x1BA90B70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineAsset___c__DisplayClass61_0_TypeDefinitionIndex = 30725;

	class TimelineAsset___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Func_3<::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*, ::System::Int32>* cmp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortTracks_b__0(::UnityEngine::ScriptableObject* lhs, ::UnityEngine::ScriptableObject* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEASSET___C__DISPLAYCLASS61_0__SORTTRACKS_B__0_OFFSET))(this, lhs, rhs);
		}
	};
}
