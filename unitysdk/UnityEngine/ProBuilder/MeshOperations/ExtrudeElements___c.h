#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1884FF90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1884FFD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__DETACHFACES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1884FFE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__EXTRUDEPERFACE_B__4_0_OFFSET UNITYSDK_OFFSET(0x18850000)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ExtrudeElements___c_TypeDefinitionIndex = 34234;

	class ExtrudeElements___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(ExtrudeElements___c_TypeDefinitionIndex)->GetStaticField(0x28AE0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ExtrudeElements___c_TypeDefinitionIndex)->GetStaticField(0x28AE8);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c**)Il2CppClass::FromTypeDefinitionIndex(ExtrudeElements___c_TypeDefinitionIndex)->GetStaticField(0x28AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _DetachFaces_b__3_0(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__DETACHFACES_B__3_0_OFFSET))(this, x);
		}

		::System::Int32 _ExtrudePerFace_b__4_0(::UnityEngine::ProBuilder::Face* x)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__EXTRUDEPERFACE_B__4_0_OFFSET))(this, x);
		}
	};
}
