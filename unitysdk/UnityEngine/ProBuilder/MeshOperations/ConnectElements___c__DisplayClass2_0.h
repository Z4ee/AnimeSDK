#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CONNECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A275C00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CONNECT_B__3_OFFSET UNITYSDK_OFFSET(0x1A275C20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A272F30)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements___c__DisplayClass2_0_TypeDefinitionIndex = 40042;

	class ConnectElements___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::ProBuilderMesh* mesh; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _Connect_b__0(::System::Int32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CONNECT_B__0_OFFSET))(this, x);
		}

		::System::Int32 _Connect_b__3(::System::Int32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS___C__DISPLAYCLASS2_0__CONNECT_B__3_OFFSET))(this, x);
		}
	};
}
