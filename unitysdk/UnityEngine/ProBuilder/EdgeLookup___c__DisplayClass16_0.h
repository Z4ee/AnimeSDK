#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_PROBUILDER_EDGELOOKUP___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC082980)
#define UNITYENGINE_PROBUILDER_EDGELOOKUP___C__DISPLAYCLASS16_0__GETEDGELOOKUP_B__0_OFFSET UNITYSDK_OFFSET(0xC082F20)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeLookup___c__DisplayClass16_0_TypeDefinitionIndex = 41550;

	class EdgeLookup___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::EdgeLookup _GetEdgeLookup_b__0(::UnityEngine::ProBuilder::Edge a1)
		{
			return ((::UnityEngine::ProBuilder::EdgeLookup(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGELOOKUP___C__DISPLAYCLASS16_0__GETEDGELOOKUP_B__0_OFFSET))(this, a1);
		}
	};
}
