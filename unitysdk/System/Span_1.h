#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Pinnable_1; }

namespace System
{
	inline static constexpr unsigned int Span_1_TypeDefinitionIndex = 4960;

	template <typename T>
	struct Span_1
	{
		::System::Pinnable_1<T>* _pinnable; // 0x0
		::System::IntPtr _byteOffset; // 0x0
		::System::Int32 _length; // 0x0
	};
}
