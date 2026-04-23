#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A28E3F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A28E440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET UNITYSDK_OFFSET(0x1A28E4F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET UNITYSDK_OFFSET(0x1A28E5A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A28E430)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A28E860)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A28E650)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A28E700)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET UNITYSDK_OFFSET(0x1A28E7B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int InternalMeshUtility___c_TypeDefinitionIndex = 40055;

	class InternalMeshUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27D90);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27D98);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DA0);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility___c**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DA8);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DB0);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DB8);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DC0);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x27DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _CreateMeshWithTransform_b__1_0(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET))(this, x);
		}

		::Il2CppArray<::UnityEngine::Color>* _CreateMeshWithTransform_b__1_1(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET))(this, x);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _CreateMeshWithTransform_b__1_2(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET))(this, x);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _ResetPbObjectWithMeshFilter_b__2_0(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET))(this, x);
		}

		::Il2CppArray<::UnityEngine::Color>* _ResetPbObjectWithMeshFilter_b__2_1(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET))(this, x);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _ResetPbObjectWithMeshFilter_b__2_2(::UnityEngine::Mesh* x)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET))(this, x);
		}

		::System::Boolean _FilterUnusedSubmeshIndexes_b__3_0(::System::Boolean x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET))(this, x);
		}
	};
}
