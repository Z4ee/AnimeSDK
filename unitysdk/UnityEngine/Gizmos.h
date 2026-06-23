#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_GIZMOS_DRAWCUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4180)
#define UNITYENGINE_GIZMOS_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1D4F4170)
#define UNITYENGINE_GIZMOS_DRAWFRUSTUM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4310)
#define UNITYENGINE_GIZMOS_DRAWFRUSTUM_OFFSET UNITYSDK_OFFSET(0x1D4F4300)
#define UNITYENGINE_GIZMOS_DRAWICON_1_OFFSET UNITYSDK_OFFSET(0x1D4F41F0)
#define UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4200)
#define UNITYENGINE_GIZMOS_DRAWICON_OFFSET UNITYSDK_OFFSET(0x1D4F41B0)
#define UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4100)
#define UNITYENGINE_GIZMOS_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1D4F40F0)
#define UNITYENGINE_GIZMOS_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1D4F4320)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4140)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1D4F4130)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4160)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_OFFSET UNITYSDK_OFFSET(0x1D4F4150)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET UNITYSDK_OFFSET(0x1D4F4370)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_2_OFFSET UNITYSDK_OFFSET(0x1D4F43E0)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F41A0)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_OFFSET UNITYSDK_OFFSET(0x1D4F4190)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4120)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1D4F4110)
#define UNITYENGINE_GIZMOS_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4240)
#define UNITYENGINE_GIZMOS_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D4F4210)
#define UNITYENGINE_GIZMOS_GET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F42D0)
#define UNITYENGINE_GIZMOS_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1D4F4270)
#define UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F4260)
#define UNITYENGINE_GIZMOS_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D4F4250)
#define UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D4F42F0)
#define UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1D4F42E0)
#define UNITYENGINE_GIZMOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F4440)

namespace UnityEngine
{
	inline static constexpr unsigned int Gizmos_TypeDefinitionIndex = 5169;

	class Gizmos : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS__CTOR_OFFSET))(this);
		}

		static ::System::Void DrawLine(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_OFFSET))(from, to);
		}

		static ::System::Void DrawWireSphere(::UnityEngine::Vector3 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET))(center, radius);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET))(center, radius);
		}

		static ::System::Void DrawWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRECUBE_OFFSET))(center, size);
		}

		static ::System::Void DrawCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWCUBE_OFFSET))(center, size);
		}

		static ::System::Void DrawWireMesh(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_OFFSET))(mesh, submeshIndex, position, rotation, scale);
		}

		static ::System::Void DrawIcon(::UnityEngine::Vector3 center, ::System::String* name, ::System::Boolean allowScaling)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_OFFSET))(center, name, allowScaling);
		}

		static ::System::Void DrawIcon_1(::UnityEngine::Vector3 center, ::System::String* name, ::System::Boolean allowScaling, ::UnityEngine::Color tint)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_1_OFFSET))(center, name, allowScaling, tint);
		}

		static ::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_COLOR_OFFSET))();
		}

		static ::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_OFFSET))(value);
		}

		static ::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_MATRIX_OFFSET))();
		}

		static ::System::Void set_matrix(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET))(value);
		}

		static ::System::Void DrawFrustum(::UnityEngine::Vector3 center, ::System::Single fov, ::System::Single maxRange, ::System::Single minRange, ::System::Single aspect)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWFRUSTUM_OFFSET))(center, fov, maxRange, minRange, aspect);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWRAY_OFFSET))(from, direction);
		}

		static ::System::Void DrawWireMesh_1(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET))(mesh);
		}

		static ::System::Void DrawWireMesh_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_2_OFFSET))(mesh, position, rotation, scale);
		}

		static ::System::Void DrawLine_Injected(::UnityEngine::Vector3& from, ::UnityEngine::Vector3& to)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET))(from, to);
		}

		static ::System::Void DrawWireSphere_Injected(::UnityEngine::Vector3& center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET))(center, radius);
		}

		static ::System::Void DrawSphere_Injected(::UnityEngine::Vector3& center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET))(center, radius);
		}

		static ::System::Void DrawWireCube_Injected(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRECUBE_INJECTED_OFFSET))(center, size);
		}

		static ::System::Void DrawCube_Injected(::UnityEngine::Vector3& center, ::UnityEngine::Vector3& size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWCUBE_INJECTED_OFFSET))(center, size);
		}

		static ::System::Void DrawWireMesh_Injected(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& scale)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_INJECTED_OFFSET))(mesh, submeshIndex, position, rotation, scale);
		}

		static ::System::Void DrawIcon_Injected(::UnityEngine::Vector3& center, ::System::String* name, ::System::Boolean allowScaling, ::UnityEngine::Color& tint)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::String*, ::System::Boolean, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET))(center, name, allowScaling, tint);
		}

		static ::System::Void get_color_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_COLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_matrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_MATRIX_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_matrix_Injected(::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET))(value);
		}

		static ::System::Void DrawFrustum_Injected(::UnityEngine::Vector3& center, ::System::Single fov, ::System::Single maxRange, ::System::Single minRange, ::System::Single aspect)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWFRUSTUM_INJECTED_OFFSET))(center, fov, maxRange, minRange, aspect);
		}
	};
}
