#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS3_0__CONNECT_B__3_OFFSET UNITYSDK_OFFSET(0x1A275CA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2758B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements___c__DisplayClass3_0_TypeDefinitionIndex = 40043;

	class ConnectElements___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* appended; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Connect_b__3(::UnityEngine::ProBuilder::Edge x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS3_0__CONNECT_B__3_OFFSET))(this, x);
		}
	};
}
