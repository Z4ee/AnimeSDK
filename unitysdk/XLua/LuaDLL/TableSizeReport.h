#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_LUADLL_TABLESIZEREPORT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11231B10)
#define XLUA_LUADLL_TABLESIZEREPORT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11231B80)
#define XLUA_LUADLL_TABLESIZEREPORT_INVOKE_OFFSET UNITYSDK_OFFSET(0x112317C0)
#define XLUA_LUADLL_TABLESIZEREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x112317A0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int TableSizeReport_TypeDefinitionIndex = 47767;

	class TableSizeReport : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr p, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_INVOKE_OFFSET))(this, p, size);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr p, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_BEGININVOKE_OFFSET))(this, p, size, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_TABLESIZEREPORT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
