#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define TRANSFORMVERSIONTRACKER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A68A090)
#define TRANSFORMVERSIONTRACKER_GET_LASTCHANGEFRAME_OFFSET UNITYSDK_OFFSET(0x1A689E20)
#define TRANSFORMVERSIONTRACKER_GET_RECENTLYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A689EB0)
#define TRANSFORMVERSIONTRACKER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A689F50)
#define TRANSFORMVERSIONTRACKER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1A689D90)
#define TRANSFORMVERSIONTRACKER_INIT_OFFSET UNITYSDK_OFFSET(0x1A689F60)
#define TRANSFORMVERSIONTRACKER_UPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1A689FE0)
#define TRANSFORMVERSIONTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68A080)

inline static constexpr unsigned int TransformVersionTracker_TypeDefinitionIndex = 40528;

class TransformVersionTracker : public ::System::Object
{
public:
	::UnityEngine::Transform* _Transform; // 0x10
	::System::Int32 _LastChangeFrame; // 0x18
	::System::UInt32 _Version; // 0x1C
	::System::Boolean _RecentChanged; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_GET_VERSION_OFFSET))(this);
	}

	::System::Int32 get_LastChangeFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_GET_LASTCHANGEFRAME_OFFSET))(this);
	}

	::System::Boolean get_RecentlyChanged()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_GET_RECENTLYCHANGED_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Transform* trans)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_INIT_OFFSET))(this, trans);
	}

	::System::Boolean UpdateVersion(::System::UInt32& version)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_UPDATEVERSION_OFFSET))(this, version);
	}

	static ::TransformVersionTracker* Create()
	{
		return ((::TransformVersionTracker*(*)())((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_CREATE_OFFSET))();
	}
};
