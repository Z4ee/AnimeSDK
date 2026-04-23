#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_GIZMOS_DRAWCUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447B30)
#define UNITYENGINE_GIZMOS_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1A447B20)
#define UNITYENGINE_GIZMOS_DRAWICON_1_OFFSET UNITYSDK_OFFSET(0x1A447BA0)
#define UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447BB0)
#define UNITYENGINE_GIZMOS_DRAWICON_OFFSET UNITYSDK_OFFSET(0x1A447B60)
#define UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447AB0)
#define UNITYENGINE_GIZMOS_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1A447AA0)
#define UNITYENGINE_GIZMOS_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1A447CB0)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447AF0)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1A447AE0)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447B10)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_OFFSET UNITYSDK_OFFSET(0x1A447B00)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET UNITYSDK_OFFSET(0x1A447D00)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_2_OFFSET UNITYSDK_OFFSET(0x1A447D60)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447B50)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_OFFSET UNITYSDK_OFFSET(0x1A447B40)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447AD0)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1A447AC0)
#define UNITYENGINE_GIZMOS_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447BF0)
#define UNITYENGINE_GIZMOS_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A447BC0)
#define UNITYENGINE_GIZMOS_GET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447C80)
#define UNITYENGINE_GIZMOS_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1A447C20)
#define UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447C10)
#define UNITYENGINE_GIZMOS_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A447C00)
#define UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447CA0)
#define UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1A447C90)

namespace UnityEngine
{
	inline static constexpr unsigned int Gizmos_TypeDefinitionIndex = 3896;

	class Gizmos : public ::System::Object
	{
	public:
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

		static ::System::Void DrawRay(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWRAY_OFFSET))(from, direction);
		}

		static ::System::Void DrawWireMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET))(mesh, position, rotation);
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
	};
}
