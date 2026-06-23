#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_MDBAVATAR_INTERNAL_CREATEMDBAVATAR_OFFSET UNITYSDK_OFFSET(0x1E882C80)
#define UNITYENGINE_MDBAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E882C20)

namespace UnityEngine
{
	inline static constexpr unsigned int MDBAvatar_TypeDefinitionIndex = 6645;

	class MDBAvatar : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_CreateMDBAvatar(::UnityEngine::MDBAvatar* self)
		{
			return ((::System::Void(*)(::UnityEngine::MDBAvatar*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBAVATAR_INTERNAL_CREATEMDBAVATAR_OFFSET))(self);
		}
	};
}
