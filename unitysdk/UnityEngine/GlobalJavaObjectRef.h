#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_GLOBALJAVAOBJECTREF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B25B9E0)
#define UNITYENGINE_GLOBALJAVAOBJECTREF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B25EA90)
#define UNITYENGINE_GLOBALJAVAOBJECTREF_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B25B780)
#define UNITYENGINE_GLOBALJAVAOBJECTREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25B080)

namespace UnityEngine
{
	inline static constexpr unsigned int GlobalJavaObjectRef_TypeDefinitionIndex = 5676;

	class GlobalJavaObjectRef : public ::System::Object
	{
	public:
		::System::Boolean m_disposed; // 0x10
		::System::IntPtr m_jobject; // 0x18

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF__CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr op_Implicit(::UnityEngine::GlobalJavaObjectRef* a1)
		{
			return ((::System::IntPtr(*)(::UnityEngine::GlobalJavaObjectRef*))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GLOBALJAVAOBJECTREF_DISPOSE_OFFSET))(this);
		}
	};
}
