#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1D6F2D50)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1D6F2DE0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D6F2C60)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1D6F2CD0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2C1A40)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA07D90)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0xA07E00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA07CC0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA07D30)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1D6F2D70)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D6F2C80)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1D6F2CF0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0xA07DD0)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA07D00)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA07D60)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccess_TypeDefinitionIndex = 5444;

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
	};
}
