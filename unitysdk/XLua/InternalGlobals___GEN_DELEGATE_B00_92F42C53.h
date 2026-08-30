#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11855E60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11855EA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_INVOKE_OFFSET UNITYSDK_OFFSET(0x11855E50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53__CTOR_OFFSET UNITYSDK_OFFSET(0x11855D60)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_92F42C53_TypeDefinitionIndex = 50471;

	class InternalGlobals___GEN_DELEGATE_B00_92F42C53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Logging::ILogger* Invoke(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::System::Object* a2)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::FateRin::Logging::ILoggerFactory* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::FateRin::Logging::ILogger* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::FateRin::Logging::ILogger*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_92F42C53_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
