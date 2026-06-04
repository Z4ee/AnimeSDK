#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0C8080)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CREATESHAPEFROMPOLYGON_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B0C80D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C80C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__FACEWITHVERTICESANDHOLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B0C80F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__FACEWITHVERTICESANDHOLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x1B0C8120)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__INSERTVERTEXINFACE_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B0C8150)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int AppendElements___c_TypeDefinitionIndex = 40857;

	class AppendElements___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c**)Il2CppClass::FromTypeDefinitionIndex(AppendElements___c_TypeDefinitionIndex)->GetStaticField(0x52790);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(AppendElements___c_TypeDefinitionIndex)->GetStaticField(0x52798);
		}
		static ::System::Func_2<::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AppendElements___c_TypeDefinitionIndex)->GetStaticField(0x527A0);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AppendElements___c_TypeDefinitionIndex)->GetStaticField(0x527A8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AppendElements___c_TypeDefinitionIndex)->GetStaticField(0x527B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateShapeFromPolygon_b__8_0(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__CREATESHAPEFROMPOLYGON_B__8_0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__FACEWITHVERTICESANDHOLE_B__10_0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__FACEWITHVERTICESANDHOLE_B__10_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS___C__INSERTVERTEXINFACE_B__18_0_OFFSET))(this, a1);
		}
	};
}
