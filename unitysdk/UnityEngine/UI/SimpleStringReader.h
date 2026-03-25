#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextReader.h"

namespace System { class String; }

#define UNITYENGINE_UI_SIMPLESTRINGREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x18B67810)
#define UNITYENGINE_UI_SIMPLESTRINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x18B67870)
#define UNITYENGINE_UI_SIMPLESTRINGREADER_RESET_OFFSET UNITYSDK_OFFSET(0x18B67800)
#define UNITYENGINE_UI_SIMPLESTRINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B677E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SimpleStringReader_TypeDefinitionIndex = 5626;

	class SimpleStringReader : public ::System::IO::TextReader
	{
	public:
		::System::String* mContent; // 0x18
		::System::Int32 pos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SIMPLESTRINGREADER__CTOR_OFFSET))(this);
		}

		::System::Void Reset(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SIMPLESTRINGREADER_RESET_OFFSET))(this, content);
		}

		::System::Int32 Peek()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SIMPLESTRINGREADER_PEEK_OFFSET))(this);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SIMPLESTRINGREADER_READ_OFFSET))(this);
		}
	};
}
