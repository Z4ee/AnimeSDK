#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET UNITYSDK_OFFSET(0x19ECD5F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET UNITYSDK_OFFSET(0x19ECD540)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET UNITYSDK_OFFSET(0x19ECD490)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET UNITYSDK_OFFSET(0x19ED2350)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET UNITYSDK_OFFSET(0x19EB7850)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET UNITYSDK_OFFSET(0x19ED1FA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET UNITYSDK_OFFSET(0x19ED0170)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET UNITYSDK_OFFSET(0x19ED0080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x19ECF8B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET UNITYSDK_OFFSET(0x19ECF1B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19ECF260)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET UNITYSDK_OFFSET(0x19ECF3C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET UNITYSDK_OFFSET(0x19ECF310)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x19ECF5A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET UNITYSDK_OFFSET(0x19ECF4F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET UNITYSDK_OFFSET(0x19ECF780)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET UNITYSDK_OFFSET(0x19ECF6D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x19ECF960)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x19ECDF30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x19ECA1D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET UNITYSDK_OFFSET(0x19ECFF00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET UNITYSDK_OFFSET(0x19ECFE10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x19ECFA10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x19ECED50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET UNITYSDK_OFFSET(0x19ECE810)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x19ECDA70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET UNITYSDK_OFFSET(0x19ECD7B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET UNITYSDK_OFFSET(0x19ECFAB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET UNITYSDK_OFFSET(0x19ECFC80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x19ECEB70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET UNITYSDK_OFFSET(0x19EBA3E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET UNITYSDK_OFFSET(0x19EBA710)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x19ED24D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET UNITYSDK_OFFSET(0x19ED2430)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET UNITYSDK_OFFSET(0x19ED22B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x19ED2210)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET UNITYSDK_OFFSET(0x19ECF110)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x19ECE540)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x19ECE450)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET UNITYSDK_OFFSET(0x19ED2D90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET UNITYSDK_OFFSET(0x19EBD220)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET UNITYSDK_OFFSET(0x19ED32D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET UNITYSDK_OFFSET(0x19ECDE80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x19ECFD20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x19ED03E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x19EBCD80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x19ED31E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET UNITYSDK_OFFSET(0x19ED04D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x19EBD080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET UNITYSDK_OFFSET(0x19ED2FF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x19EBCF00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET UNITYSDK_OFFSET(0x19ED30F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET UNITYSDK_OFFSET(0x19ED02F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET UNITYSDK_OFFSET(0x19ED05C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19ECE8B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET UNITYSDK_OFFSET(0x19ECE6C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x19ED07A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x19ED1DC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x19ECD720)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET UNITYSDK_OFFSET(0x19ED0A70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19EBC760)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET UNITYSDK_OFFSET(0x19ED0890)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19EBC800)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19ED0930)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x19ED09D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19EBC8A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET UNITYSDK_OFFSET(0x19ECFB90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x19ECD3E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x19ED1730)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x19ED06B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x19ED1640)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET UNITYSDK_OFFSET(0x19EBBC90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET UNITYSDK_OFFSET(0x19ED2650)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET UNITYSDK_OFFSET(0x19ED3380)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET UNITYSDK_OFFSET(0x19ED2CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19ED3470)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET UNITYSDK_OFFSET(0x19ECDDD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET UNITYSDK_OFFSET(0x19EB8F60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x19ECE080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET UNITYSDK_OFFSET(0x19ED2050)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET UNITYSDK_OFFSET(0x19ED2130)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET UNITYSDK_OFFSET(0x19ED0B10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET UNITYSDK_OFFSET(0x19ED1BE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET UNITYSDK_OFFSET(0x19ED0BC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19ED0CB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET UNITYSDK_OFFSET(0x19ED0DA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x19ED0F80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET UNITYSDK_OFFSET(0x19ED0E90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x19ED1CD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x19ED1EB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET UNITYSDK_OFFSET(0x19ECDFE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET UNITYSDK_OFFSET(0x19ECD140)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET UNITYSDK_OFFSET(0x19ED2900)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET UNITYSDK_OFFSET(0x19ED2810)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET UNITYSDK_OFFSET(0x19ED29F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x19ED2C40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET UNITYSDK_OFFSET(0x19ED2570)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x19ED2B90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x19ED2AE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ECDB20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ECDC80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19ECDBD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19ECEF30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET UNITYSDK_OFFSET(0x19ECF020)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET UNITYSDK_OFFSET(0x19ED1460)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET UNITYSDK_OFFSET(0x19ECD330)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET UNITYSDK_OFFSET(0x19ED1370)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET UNITYSDK_OFFSET(0x19ED11F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET UNITYSDK_OFFSET(0x19ED1100)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x19ED1550)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x19ECDD20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET UNITYSDK_OFFSET(0x19ECD910)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET UNITYSDK_OFFSET(0x19ECD9C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET UNITYSDK_OFFSET(0x19ECE130)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x19ECD1E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET UNITYSDK_OFFSET(0x19ECD0A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x19ECEE40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET UNITYSDK_OFFSET(0x19ED2770)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET UNITYSDK_OFFSET(0x19EB8100)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET UNITYSDK_OFFSET(0x19ECD280)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET UNITYSDK_OFFSET(0x19ECD860)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET UNITYSDK_OFFSET(0x19ECE770)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET UNITYSDK_OFFSET(0x19EC1410)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19ED2E10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET UNITYSDK_OFFSET(0x19EC1590)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET UNITYSDK_OFFSET(0x19ED2F00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x19EC12B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET UNITYSDK_OFFSET(0x19EC1360)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x19ECEC60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET UNITYSDK_OFFSET(0x19ED1820)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET UNITYSDK_OFFSET(0x19ED1910)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x19ECE990)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x19ECEA80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET UNITYSDK_OFFSET(0x19ED1A00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x19ED1AF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET UNITYSDK_OFFSET(0x19ECE2D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x19ECE1E0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 3203;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ReducibleMustOverrideReduce()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET))();
		}

		static ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET))(p0);
		}

		static ::System::Exception* SameKeyExistsInExpando(::System::Object* key)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET))(key);
		}

		static ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET))(p0);
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

		static ::System::Exception* SetterHasNoParams(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyCannotHaveRefType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* IndexesOfSetGetMustMatch(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveVarArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* BoundsCannotBeLessThanOne(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBeByRef(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBePointer(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET))(paramName);
		}

		static ::System::Exception* SetterMustBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchGetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchSetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET))(paramName);
		}

		static ::System::Exception* BothAccessorsMustBeStatic(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticFieldsHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticMethodsHaveNullInstance()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET))();
		}

		static ::System::Exception* PropertyTypeCannotBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidUnboxType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeWriteable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustNotHaveValueType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET))(paramName);
		}

		static ::System::Exception* MustBeReducible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET))();
		}

		static ::System::Exception* LabelMustBeVoidOrHaveExpression(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET))(paramName);
		}

		static ::System::Exception* QuotedExpressionMustBeLambda(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET))(paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* DuplicateVariable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* DuplicateVariable_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* FaultCannotHaveCatchOrFinally(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET))(paramName);
		}

		static ::System::Exception* TryMustHaveCatchFinallyOrFault()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET))();
		}

		static ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET))();
		}

		static ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET))(p0, p1);
		}

		static ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ConversionIsNotSupportedForArithmeticTypes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET))();
		}

		static ::System::Exception* ArgumentMustBeArray(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeBoolean(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInteger(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInteger_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeArrayIndexType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentTypesMustMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET))();
		}

		static ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoalesceUsedOnNonNullType()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET))(p0, p1, p2);
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

		static ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET))(paramName);
		}

		static ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET))(p0, paramName);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET))(p0, p1);
		}

		static ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* UnhandledBinary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UnhandledUnary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET))(p0, p1);
		}

		static ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentCannotBeOfTypeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* LabelTargetUndefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotLeaveFinally()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET))();
		}

		static ::System::Exception* ControlCannotLeaveFilterTest()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET))();
		}

		static ::System::Exception* AmbiguousJump(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotEnterTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET))();
		}

		static ::System::Exception* ControlCannotEnterExpression()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET))();
		}

		static ::System::Exception* NonLocalJumpWithValue(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET))(p0);
		}

		static ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0)
		{
			return ((::System::Exception*(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET))(p0);
		}

		static ::System::Exception* RethrowRequiresCatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET))();
		}

		static ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(paramName);
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET))();
		}

		static ::System::Exception* NonStaticConstructorRequired(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET))(paramName);
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

		static ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeContainsGenericParameters_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* TypeIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeIsGeneric_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfConstructorArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET))(p0, p1, p2, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter_1(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET))(p0, p1, p2, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfLambdaArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionMustBeReadable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeReadable_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* InvalidArgumentValue(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidNullValue(::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET))(type, paramName);
		}

		static ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET))(value, type, paramName);
		}

		static ::System::String* GetParamName(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET))(paramName, index);
		}
	};
}
