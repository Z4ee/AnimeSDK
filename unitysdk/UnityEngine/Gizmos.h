#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_GIZMOS_DRAWCUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298DF0)
#define UNITYENGINE_GIZMOS_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1B298DE0)
#define UNITYENGINE_GIZMOS_DRAWICON_1_OFFSET UNITYSDK_OFFSET(0x1B298E60)
#define UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298E70)
#define UNITYENGINE_GIZMOS_DRAWICON_OFFSET UNITYSDK_OFFSET(0x1B298E20)
#define UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298D70)
#define UNITYENGINE_GIZMOS_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1B298D60)
#define UNITYENGINE_GIZMOS_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1B298F70)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298DB0)
#define UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1B298DA0)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298DD0)
#define UNITYENGINE_GIZMOS_DRAWWIRECUBE_OFFSET UNITYSDK_OFFSET(0x1B298DC0)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET UNITYSDK_OFFSET(0x1B298FC0)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_2_OFFSET UNITYSDK_OFFSET(0x1B299020)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298E10)
#define UNITYENGINE_GIZMOS_DRAWWIREMESH_OFFSET UNITYSDK_OFFSET(0x1B298E00)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298D90)
#define UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET UNITYSDK_OFFSET(0x1B298D80)
#define UNITYENGINE_GIZMOS_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298EB0)
#define UNITYENGINE_GIZMOS_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B298E80)
#define UNITYENGINE_GIZMOS_GET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298F40)
#define UNITYENGINE_GIZMOS_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1B298EE0)
#define UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298ED0)
#define UNITYENGINE_GIZMOS_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B298EC0)
#define UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298F60)
#define UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1B298F50)

namespace UnityEngine
{
	inline static constexpr unsigned int Gizmos_TypeDefinitionIndex = 4070;

	class Gizmos : public ::System::Object
	{
	public:
		static ::System::Void DrawLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireSphere(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireCube(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRECUBE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawCube(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWCUBE_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireMesh(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawIcon(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawIcon_1(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::Boolean a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_COLOR_OFFSET))();
		}

		static ::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_MATRIX_OFFSET))();
		}

		static ::System::Void set_matrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_OFFSET))(a1);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWRAY_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawWireMesh_2(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawLine_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWLINE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireSphere_Injected(::UnityEngine::Vector3& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRESPHERE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DrawSphere_Injected(::UnityEngine::Vector3& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWSPHERE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireCube_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIRECUBE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DrawCube_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWCUBE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void DrawWireMesh_Injected(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4, ::UnityEngine::Vector3& a5)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWWIREMESH_INJECTED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawIcon_Injected(::UnityEngine::Vector3& a1, ::System::String* a2, ::System::Boolean a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::String*, ::System::Boolean, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_DRAWICON_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void get_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_COLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_COLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void get_matrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_GET_MATRIX_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_matrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_GIZMOS_SET_MATRIX_INJECTED_OFFSET))(a1);
		}
	};
}
