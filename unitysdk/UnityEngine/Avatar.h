#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_AVATAR_GETAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x1E875A80)
#define UNITYENGINE_AVATAR_GETBONEPATHS_OFFSET UNITYSDK_OFFSET(0x1E875B50)
#define UNITYENGINE_AVATAR_GETPOSTROTATION_OFFSET UNITYSDK_OFFSET(0x1E875AC0)
#define UNITYENGINE_AVATAR_GETSKELETONPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E875BB0)
#define UNITYENGINE_AVATAR_GETSKELETONPOSITION_OFFSET UNITYSDK_OFFSET(0x1E875B60)
#define UNITYENGINE_AVATAR_GET_ISHUMAN_OFFSET UNITYSDK_OFFSET(0x1E875A70)
#define UNITYENGINE_AVATAR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E875A60)
#define UNITYENGINE_AVATAR_INTERNAL_GETAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x1E875AB0)
#define UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E875B40)
#define UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_OFFSET UNITYSDK_OFFSET(0x1E875B00)
#define UNITYENGINE_AVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E875A10)

namespace UnityEngine
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 6635;

	class Avatar : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_isHuman()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_ISHUMAN_OFFSET))(this);
		}

		::System::Single GetAxisLength(::System::Int32 humanId)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETAXISLENGTH_OFFSET))(this, humanId);
		}

		::UnityEngine::Quaternion GetPostRotation(::System::Int32 humanId)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETPOSTROTATION_OFFSET))(this, humanId);
		}

		::System::Single Internal_GetAxisLength(::System::Int32 humanId)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETAXISLENGTH_OFFSET))(this, humanId);
		}

		::UnityEngine::Quaternion Internal_GetPostRotation(::System::Int32 humanId)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_OFFSET))(this, humanId);
		}

		::System::Int32 GetBonePaths(::Il2CppArray<::System::String*>* inBuffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETBONEPATHS_OFFSET))(this, inBuffer);
		}

		::UnityEngine::Vector3 GetSkeletonPosition(::System::Int32 boneIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETSKELETONPOSITION_OFFSET))(this, boneIndex);
		}

		::System::Void Internal_GetPostRotation_Injected(::System::Int32 humanId, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_INJECTED_OFFSET))(this, humanId, ret);
		}

		::System::Void GetSkeletonPosition_Injected(::System::Int32 boneIndex, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETSKELETONPOSITION_INJECTED_OFFSET))(this, boneIndex, ret);
		}
	};
}
