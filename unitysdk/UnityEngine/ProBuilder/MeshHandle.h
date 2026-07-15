#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PROBUILDER_MESHHANDLE_DRAWMESHNOW_OFFSET UNITYSDK_OFFSET(0xC09C6D0)
#define UNITYENGINE_PROBUILDER_MESHHANDLE_GET_MESH_OFFSET UNITYSDK_OFFSET(0xC09C6B0)
#define UNITYENGINE_PROBUILDER_MESHHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC09C6C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandle_TypeDefinitionIndex = 41571;

	class MeshHandle : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* m_Mesh; // 0x10
		::UnityEngine::Transform* m_Transform; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLE_GET_MESH_OFFSET))(this);
		}

		::System::Void DrawMeshNow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLE_DRAWMESHNOW_OFFSET))(this, a1);
		}
	};
}
