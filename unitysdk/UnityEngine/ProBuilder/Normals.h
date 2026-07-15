#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATEHARDNORMALS_OFFSET UNITYSDK_OFFSET(0xC0F7980)
#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0xC08CDC0)
#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0xC08D810)
#define UNITYENGINE_PROBUILDER_NORMALS_CLEARINTARRAY_OFFSET UNITYSDK_OFFSET(0xC0F77A0)
#define UNITYENGINE_PROBUILDER_NORMALS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0F8000)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Normals_TypeDefinitionIndex = 41577;

	class Normals : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_CachedIntArray()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x541C0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_SmoothAvg()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x541C8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_SmoothAvgCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x541D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS__CCTOR_OFFSET))();
		}

		static ::System::Void ClearIntArray(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CLEARINTARRAY_OFFSET))(a1);
		}

		static ::System::Void CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATETANGENTS_OFFSET))(a1);
		}

		static ::System::Void CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATEHARDNORMALS_OFFSET))(a1);
		}

		static ::System::Void CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATENORMALS_OFFSET))(a1);
		}
	};
}
