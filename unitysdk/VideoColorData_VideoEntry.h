#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int VideoColorData_VideoEntry_TypeDefinitionIndex = 59800;

struct alignas(8) VideoColorData_VideoEntry
{
	::System::String* videoPath; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Color>* dominantColors; // 0x18
};
