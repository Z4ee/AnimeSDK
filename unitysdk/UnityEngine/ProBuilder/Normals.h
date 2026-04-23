#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATEHARDNORMALS_OFFSET UNITYSDK_OFFSET(0x1A2A8A30)
#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x1A241F90)
#define UNITYENGINE_PROBUILDER_NORMALS_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1A242B20)
#define UNITYENGINE_PROBUILDER_NORMALS_CLEARINTARRAY_OFFSET UNITYSDK_OFFSET(0x1A2A8840)
#define UNITYENGINE_PROBUILDER_NORMALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2A91A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Normals_TypeDefinitionIndex = 39935;

	class Normals : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_SmoothAvg()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x28C10);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_CachedIntArray()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x28C18);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_SmoothAvgCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Normals_TypeDefinitionIndex)->GetStaticField(0x28C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS__CCTOR_OFFSET))();
		}

		static ::System::Void ClearIntArray(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CLEARINTARRAY_OFFSET))(count);
		}

		static ::System::Void CalculateTangents(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATETANGENTS_OFFSET))(mesh);
		}

		static ::System::Void CalculateHardNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATEHARDNORMALS_OFFSET))(mesh);
		}

		static ::System::Void CalculateNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMALS_CALCULATENORMALS_OFFSET))(mesh);
		}
	};
}
