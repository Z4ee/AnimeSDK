#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define TRANSFORMVERSIONTRACKER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2F4230)
#define TRANSFORMVERSIONTRACKER_GET_LASTCHANGEFRAME_OFFSET UNITYSDK_OFFSET(0x1D2F3FC0)
#define TRANSFORMVERSIONTRACKER_GET_RECENTLYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D2F4050)
#define TRANSFORMVERSIONTRACKER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D2F40F0)
#define TRANSFORMVERSIONTRACKER_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D2F3F30)
#define TRANSFORMVERSIONTRACKER_INIT_OFFSET UNITYSDK_OFFSET(0x1D2F4100)
#define TRANSFORMVERSIONTRACKER_UPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1D2F4180)
#define TRANSFORMVERSIONTRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F4220)

inline static constexpr unsigned int TransformVersionTracker_TypeDefinitionIndex = 43781;

class TransformVersionTracker : public ::System::Object
{
public:
	::UnityEngine::Transform* _Transform; // 0x10
	::System::UInt32 _Version; // 0x18
	::System::Boolean _RecentChanged; // 0x1C
	::System::Int32 _LastChangeFrame; // 0x20

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

	::System::Void Init(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_INIT_OFFSET))(this, a1);
	}

	::System::Boolean UpdateVersion(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_UPDATEVERSION_OFFSET))(this, a1);
	}

	static ::TransformVersionTracker* Create()
	{
		return ((::TransformVersionTracker*(*)())((::PBYTE)hIl2Cpp + TRANSFORMVERSIONTRACKER_CREATE_OFFSET))();
	}
};
