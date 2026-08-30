#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_OBJECTGUISTATE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ED9A760)
#define UNITYENGINE_OBJECTGUISTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED9A6D0)
#define UNITYENGINE_OBJECTGUISTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ED9A790)
#define UNITYENGINE_OBJECTGUISTATE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1ED9A6C0)
#define UNITYENGINE_OBJECTGUISTATE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ED9A810)
#define UNITYENGINE_OBJECTGUISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9A6A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ObjectGUIState_TypeDefinitionIndex = 5187;

	class ObjectGUIState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_DESTROY_OFFSET))(this);
		}

		static ::System::IntPtr Internal_Create()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_INTERNAL_CREATE_OFFSET))();
		}

		static ::System::Void Internal_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTGUISTATE_INTERNAL_DESTROY_OFFSET))(a1);
		}
	};
}
