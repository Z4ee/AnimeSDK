#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_JOBS_TRANSFORMACCESS_GETLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1A44B860)
#define UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x22E4810)

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int TransformAccess_TypeDefinitionIndex = 4237;

	struct alignas(8) TransformAccess
	{
		::System::IntPtr hierarchy; // 0x10
		::System::Int32 index; // 0x18

		/*
		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOBS_TRANSFORMACCESS_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
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
