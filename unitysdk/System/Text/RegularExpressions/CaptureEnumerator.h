#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class Capture; }
namespace System::Text::RegularExpressions { class CaptureCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1AFEB410)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AFEB400)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AFEB3C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AFEB490)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEB3B0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int CaptureEnumerator_TypeDefinitionIndex = 2726;

	class CaptureEnumerator : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::CaptureCollection* _rcc; // 0x10
		::System::Int32 _curindex; // 0x18

		::System::Void _ctor(::System::Text::RegularExpressions::CaptureCollection* rcc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::CaptureCollection*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR__CTOR_OFFSET))(this, rcc);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Capture* get_Capture()
		{
			return ((::System::Text::RegularExpressions::Capture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CAPTURE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
