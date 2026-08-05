#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1EA86B70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1EA86C00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA86A80)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1EA86AF0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1EA86C70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x32EF90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA56860)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA568D0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA56790)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA56800)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0xA56930)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1EA86B90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA86AA0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1EA86B10)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA568A0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA567D0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA56830)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccess_TypeDefinitionIndex = 5447;

	struct alignas(8) TransformAccess
	{
		::System::IntPtr hierarchy; // 0x10
		::System::Int32 index; // 0x18

		/*
		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Vector3 get_localScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_localScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALSCALE_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Matrix4x4 get_worldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}
		*/

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ISVALID_OFFSET))(this);
		}

		/*
		static ::System::Void GetPosition(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& p)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET))(access, p);
		}
		*/

		/*
		static ::System::Void SetPosition(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& p)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET))(access, p);
		}
		*/

		/*
		static ::System::Void GetRotation(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Quaternion& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void SetRotation(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Quaternion& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void GetLocalScale(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void SetLocalScale(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Vector3& r)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALSCALE_OFFSET))(access, r);
		}
		*/

		/*
		static ::System::Void GetLocalToWorldMatrix(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET))(access, m);
		}
		*/

		/*
		static ::System::Void GetWorldToLocalMatrix(::UnityEngine::Jobs::TransformAccess& access, ::UnityEngine::Matrix4x4& m)
		{
			return ((::System::Void(*)(::UnityEngine::Jobs::TransformAccess&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GETWORLDTOLOCALMATRIX_OFFSET))(access, m);
		}
		*/
	};
}
