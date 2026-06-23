#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1D81BD40)
#define UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x1D81BB90)
#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET UNITYSDK_OFFSET(0x1D81BB80)
#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET UNITYSDK_OFFSET(0x1D81BB70)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1D81BE80)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1D81BE90)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1D81BE00)
#define UNITYENGINE_UNITYLOGWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81BCE0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityLogWriter_TypeDefinitionIndex = 5290;

	class UnityLogWriter : public ::System::IO::TextWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Void WriteStringToUnityLog(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET))(s);
		}

		static ::System::Void WriteStringToUnityLogImpl(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET))(s);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET))();
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_1_OFFSET))(this, s);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_2_OFFSET))(this, buffer, index, count);
		}
	};
}
