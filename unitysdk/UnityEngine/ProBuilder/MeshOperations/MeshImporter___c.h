#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F5500)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F5540)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__IMPORT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B0F5550)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImporter___c_TypeDefinitionIndex = 40888;

	class MeshImporter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshImporter___c_TypeDefinitionIndex)->GetStaticField(0x53DE0);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshImporter___c**)Il2CppClass::FromTypeDefinitionIndex(MeshImporter___c_TypeDefinitionIndex)->GetStaticField(0x53DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _Import_b__9_0(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__IMPORT_B__9_0_OFFSET))(this, a1);
		}
	};
}
