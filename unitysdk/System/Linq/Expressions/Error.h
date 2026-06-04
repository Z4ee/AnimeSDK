#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET UNITYSDK_OFFSET(0x1AD43EF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET UNITYSDK_OFFSET(0x1AD43E40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET UNITYSDK_OFFSET(0x1AD43D90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET UNITYSDK_OFFSET(0x1AD48C50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET UNITYSDK_OFFSET(0x1AD2E630)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET UNITYSDK_OFFSET(0x1AD488A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET UNITYSDK_OFFSET(0x1AD46A70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET UNITYSDK_OFFSET(0x1AD46980)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x1AD461B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET UNITYSDK_OFFSET(0x1AD45AB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AD45B60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET UNITYSDK_OFFSET(0x1AD45CC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET UNITYSDK_OFFSET(0x1AD45C10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x1AD45EA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET UNITYSDK_OFFSET(0x1AD45DF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1AD46080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET UNITYSDK_OFFSET(0x1AD45FD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AD46260)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AD44830)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1AD40D00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET UNITYSDK_OFFSET(0x1AD46800)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET UNITYSDK_OFFSET(0x1AD46710)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x1AD46310)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD45650)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET UNITYSDK_OFFSET(0x1AD45110)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x1AD44370)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET UNITYSDK_OFFSET(0x1AD440B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AD463B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET UNITYSDK_OFFSET(0x1AD46580)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD45470)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET UNITYSDK_OFFSET(0x1AD31210)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET UNITYSDK_OFFSET(0x1AD31540)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1AD48DD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET UNITYSDK_OFFSET(0x1AD48D30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET UNITYSDK_OFFSET(0x1AD48BB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x1AD48B10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET UNITYSDK_OFFSET(0x1AD45A10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1AD44E40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1AD44D50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET UNITYSDK_OFFSET(0x1AD49690)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET UNITYSDK_OFFSET(0x1AD33EF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET UNITYSDK_OFFSET(0x1AD49BD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET UNITYSDK_OFFSET(0x1AD44780)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AD46620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x1AD46CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1AD33A50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD49AE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET UNITYSDK_OFFSET(0x1AD46DD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1AD33D50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD498F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x1AD33BD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AD499F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET UNITYSDK_OFFSET(0x1AD46BF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET UNITYSDK_OFFSET(0x1AD46EC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AD451B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET UNITYSDK_OFFSET(0x1AD44FC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x1AD470A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x1AD486C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x1AD44020)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AD47370)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AD33430)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET UNITYSDK_OFFSET(0x1AD47190)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AD334D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AD47230)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1AD472D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AD33570)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET UNITYSDK_OFFSET(0x1AD46490)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x1AD43CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x1AD48030)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x1AD46FB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x1AD47F40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1AD329E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET UNITYSDK_OFFSET(0x1AD48F50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET UNITYSDK_OFFSET(0x1AD49C80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET UNITYSDK_OFFSET(0x1AD495E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AD49D70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET UNITYSDK_OFFSET(0x1AD446D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET UNITYSDK_OFFSET(0x1AD2FDE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1AD44980)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD48950)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD48A30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD47410)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET UNITYSDK_OFFSET(0x1AD484E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AD474C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AD475B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET UNITYSDK_OFFSET(0x1AD476A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x1AD47880)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET UNITYSDK_OFFSET(0x1AD47790)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x1AD485D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x1AD487B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET UNITYSDK_OFFSET(0x1AD448E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET UNITYSDK_OFFSET(0x1AD43A40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET UNITYSDK_OFFSET(0x1AD49200)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET UNITYSDK_OFFSET(0x1AD49110)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1AD492F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x1AD49540)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1AD48E70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x1AD49490)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1AD493E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD44420)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD44580)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AD444D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AD45830)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AD45920)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AD47D60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET UNITYSDK_OFFSET(0x1AD43C30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET UNITYSDK_OFFSET(0x1AD47C70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET UNITYSDK_OFFSET(0x1AD47AF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET UNITYSDK_OFFSET(0x1AD47A00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x1AD47E50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x1AD44620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET UNITYSDK_OFFSET(0x1AD44210)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET UNITYSDK_OFFSET(0x1AD442C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET UNITYSDK_OFFSET(0x1AD44A30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1AD43AE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET UNITYSDK_OFFSET(0x1AD439A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD45740)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET UNITYSDK_OFFSET(0x1AD49070)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET UNITYSDK_OFFSET(0x1AD2EE70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD43B80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET UNITYSDK_OFFSET(0x1AD44160)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET UNITYSDK_OFFSET(0x1AD45070)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET UNITYSDK_OFFSET(0x1AD38180)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AD49710)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET UNITYSDK_OFFSET(0x1AD38300)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET UNITYSDK_OFFSET(0x1AD49800)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x1AD38020)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET UNITYSDK_OFFSET(0x1AD380D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1AD45560)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET UNITYSDK_OFFSET(0x1AD48120)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET UNITYSDK_OFFSET(0x1AD48210)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x1AD45290)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x1AD45380)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET UNITYSDK_OFFSET(0x1AD48300)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1AD483F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET UNITYSDK_OFFSET(0x1AD44BD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x1AD44AE0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 3204;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ReducibleMustOverrideReduce()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET))();
		}

		static ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET))(a1);
		}

		static ::System::Exception* SameKeyExistsInExpando(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET))(a1);
		}

		static ::System::Exception* KeyDoesNotExistInExpando(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET))(a1);
		}

		static ::System::Exception* CollectionModifiedWhileEnumerating()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET))();
		}

		static ::System::Exception* CollectionReadOnly()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET))();
		}

		static ::System::Exception* MustReduceToDifferent()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET))();
		}

		static ::System::Exception* ReducedNotCompatible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET))();
		}

		static ::System::Exception* SetterHasNoParams(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET))(a1);
		}

		static ::System::Exception* PropertyCannotHaveRefType(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET))(a1);
		}

		static ::System::Exception* IndexesOfSetGetMustMatch(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET))(a1);
		}

		static ::System::Exception* AccessorsCannotHaveVarArgs(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET))(a1);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET))(a1);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* BoundsCannotBeLessThanOne(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET))(a1);
		}

		static ::System::Exception* TypeMustNotBeByRef(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET))(a1);
		}

		static ::System::Exception* TypeMustNotBePointer(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET))(a1);
		}

		static ::System::Exception* SetterMustBeVoid(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET))(a1);
		}

		static ::System::Exception* PropertyTypeMustMatchGetter(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET))(a1);
		}

		static ::System::Exception* PropertyTypeMustMatchSetter(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET))(a1);
		}

		static ::System::Exception* BothAccessorsMustBeStatic(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET))(a1);
		}

		static ::System::Exception* OnlyStaticFieldsHaveNullInstance(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET))(a1);
		}

		static ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET))(a1);
		}

		static ::System::Exception* OnlyStaticMethodsHaveNullInstance()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET))();
		}

		static ::System::Exception* PropertyTypeCannotBeVoid(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET))(a1);
		}

		static ::System::Exception* InvalidUnboxType(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET))(a1);
		}

		static ::System::Exception* ExpressionMustBeWriteable(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustNotHaveValueType(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET))(a1);
		}

		static ::System::Exception* MustBeReducible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET))();
		}

		static ::System::Exception* LabelMustBeVoidOrHaveExpression(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET))(a1);
		}

		static ::System::Exception* QuotedExpressionMustBeLambda(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET))(a1);
		}

		static ::System::Exception* VariableMustNotBeByRef(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* VariableMustNotBeByRef_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* DuplicateVariable(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET))(a1, a2);
		}

		static ::System::Exception* DuplicateVariable_1(::System::Object* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* FaultCannotHaveCatchOrFinally(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET))(a1);
		}

		static ::System::Exception* TryMustHaveCatchFinallyOrFault()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET))();
		}

		static ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET))();
		}

		static ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET))(a1);
		}

		static ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET))(a1, a2);
		}

		static ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET))(a1, a2);
		}

		static ::System::Exception* CoercionOperatorNotDefined(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET))(a1, a2);
		}

		static ::System::Exception* UnaryOperatorNotDefined(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET))(a1, a2);
		}

		static ::System::Exception* BinaryOperatorNotDefined(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ReferenceEqualityNotDefined(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET))(a1, a2);
		}

		static ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* ConversionIsNotSupportedForArithmeticTypes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET))();
		}

		static ::System::Exception* ArgumentMustBeArray(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeBoolean(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentMustBeInteger(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeInteger_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentMustBeArrayIndexType(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET))(a1);
		}

		static ::System::Exception* ArgumentTypesMustMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET))();
		}

		static ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET))(a1);
		}

		static ::System::Exception* IncorrectTypeForTypeAs(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET))(a1, a2);
		}

		static ::System::Exception* CoalesceUsedOnNonNullType()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET))(a1, a2);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET))(a1, a2);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET))(a1, a2);
		}

		static ::System::Exception* ExpressionTypeNotInvocable(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET))(a1, a2);
		}

		static ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* FieldInfoNotDefinedForType(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* IncorrectNumberOfIndexes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMembersForGivenConstructor()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfArgumentsForMembers()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET))();
		}

		static ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET))(a1);
		}

		static ::System::Exception* MemberNotFieldOrProperty(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET))(a1, a2);
		}

		static ::System::Exception* MethodContainsGenericParameters(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Exception* MethodIsGeneric(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET))(a1, a2);
		}

		static ::System::Exception* MethodNotPropertyAccessor(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* MethodNotPropertyAccessor_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET))(a1, a2);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter_1(::System::Object* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET))(a1, a2);
		}

		static ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET))(a1, a2);
		}

		static ::System::Exception* PropertyNotDefinedForType(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* UnhandledBinary(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET))(a1, a2);
		}

		static ::System::Exception* UnhandledUnary(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET))(a1, a2);
		}

		static ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET))(a1, a2);
		}

		static ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET))(a1, a2);
		}

		static ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(a1, a2);
		}

		static ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentCannotBeOfTypeVoid(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET))(a1);
		}

		static ::System::Exception* LabelTargetAlreadyDefined(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET))(a1);
		}

		static ::System::Exception* LabelTargetUndefined(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET))(a1);
		}

		static ::System::Exception* ControlCannotLeaveFinally()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET))();
		}

		static ::System::Exception* ControlCannotLeaveFilterTest()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET))();
		}

		static ::System::Exception* AmbiguousJump(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET))(a1);
		}

		static ::System::Exception* ControlCannotEnterTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET))();
		}

		static ::System::Exception* ControlCannotEnterExpression()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET))();
		}

		static ::System::Exception* NonLocalJumpWithValue(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET))(a1);
		}

		static ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType a1)
		{
			return ((::System::Exception*(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET))(a1);
		}

		static ::System::Exception* RethrowRequiresCatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET))();
		}

		static ::System::Exception* MustRewriteToSameNode(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* MustRewriteChildToSameType(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* MustRewriteWithoutMethod(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(a1);
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET))();
		}

		static ::System::Exception* NonStaticConstructorRequired(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET))(a1);
		}

		static ::System::Exception* NonAbstractConstructorRequired()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET))();
		}

		static ::System::Exception* InvalidProgram()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET))();
		}

		static ::System::Exception* EnumerationIsDone()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET))();
		}

		static ::System::Exception* TypeContainsGenericParameters(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Exception* TypeContainsGenericParameters_1(::System::Object* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* TypeIsGeneric(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET))(a1, a2);
		}

		static ::System::Exception* TypeIsGeneric_1(::System::Object* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* IncorrectNumberOfConstructorArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter_1(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* IncorrectNumberOfLambdaArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET))(a1, a2);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter_1(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* ExpressionMustBeReadable(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET))(a1);
		}

		static ::System::Exception* ExpressionMustBeReadable_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET))(a1, a2);
		}

		static ::System::Exception* InvalidArgumentValue(::System::String* a1)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET))(a1);
		}

		static ::System::Exception* InvalidNullValue(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET))(a1, a2);
		}

		static ::System::Exception* InvalidTypeException(::System::Object* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetParamName(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET))(a1, a2);
		}
	};
}
