#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET UNITYSDK_OFFSET(0x1B0E9C00)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET UNITYSDK_OFFSET(0x1B0EA9C0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET UNITYSDK_OFFSET(0x1B0EB810)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET UNITYSDK_OFFSET(0x1B0EBFD0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET UNITYSDK_OFFSET(0x1B0E90C0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0E9040)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B0EC0D0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET UNITYSDK_OFFSET(0x1B0EC180)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET UNITYSDK_OFFSET(0x1B0EC1E0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET UNITYSDK_OFFSET(0x1B0EC240)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x1B0EC120)
#define UNITYENGINE_RENDERING_DEBUGSHAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E90B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugShapes_TypeDefinitionIndex = 34086;

	class DebugShapes : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::DebugShapes** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::DebugShapes**)Il2CppClass::FromTypeDefinitionIndex(DebugShapes_TypeDefinitionIndex)->GetStaticField(0x45EC0);
		}
		::UnityEngine::Mesh* m_coneMesh; // 0x10
		::UnityEngine::Mesh* m_pyramidMesh; // 0x18
		::UnityEngine::Mesh* m_sphereMesh; // 0x20
		::UnityEngine::Mesh* m_boxMesh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::DebugShapes* get_instance()
		{
			return ((::UnityEngine::Rendering::DebugShapes*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET))();
		}

		::System::Void BuildSphere(::UnityEngine::Mesh*& a1, ::System::Single a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BuildBox(::UnityEngine::Mesh*& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BuildCone(::UnityEngine::Mesh*& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BuildPyramid(::UnityEngine::Mesh*& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BuildShapes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET))(this);
		}

		::System::Void RebuildResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestSphereMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestBoxMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestConeMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* RequestPyramidMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET))(this);
		}
	};
}
